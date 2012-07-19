<?php

// $Id: AiaraldeaYoutubeParser.inc,v 1.1.2.2 2011/02/01 10:32:09 wojtha Exp $

/**
 * @file
 * Feeds parser class for Youtube
 */

/**
 * Class definition for Youtube Parser.
 *
 * Parses RSS or Atom feeds returned from YouTube API like.
 */
class AiaraldeaYoutubeParser extends FeedsParser {

    /**
     * Parse the extra mapping sources provided by this parser.
     *
     * @param $batch FeedsImportBatch
     * @param $source FeedsSource
     *
     * @see FeedsParser::parse()
     */
    public function parse(FeedsImportBatch $batch, FeedsSource $source) {

        $youtube_feed = $batch->getRaw();

        /** @see common_syndication_parser_parse() */
        if (!defined('LIBXML_VERSION') || (version_compare(phpversion(), '5.1.0', '<'))) {
            @$sxml = simplexml_load_string($youtube_feed, NULL);
        } else {
            @$sxml = simplexml_load_string($youtube_feed, NULL, LIBXML_NOERROR | LIBXML_NOWARNING | LIBXML_NOCDATA);
        }

        // Got a malformed XML.
        if ($sxml === FALSE || is_null($sxml)) {
            throw new Exception(t('AiaraldeaYoutubeParser: Malformed XML source.'));
        }

        // Run parsing if the feed is Atom or RSS
        if ($this->isAtomFeed($sxml)) {
            $this->parseAtom($sxml, $batch, $source);
        } elseif ($this->isRssFeed($sxml)) {
            $this->parseRss20($sxml, $batch, $source);
        } else {
            throw new Exception(t('AiaraldeaYoutubeParser: Unknown type of feed.'));
        }
    }

    /**
     * Check if given feed object is an Atom feed.
     *
     * @param SimpleXMLElement $sxml
     *
     * @return boolen
     *   TRUE if given SimpleXML object is Atom feed or FALSE
     */
    protected function isAtomFeed(SimpleXMLElement $sxml) {
        return $sxml->getName() == 'feed';
    }

    /**
     * Check if given feed object is a RSS feed.
     *
     * @param SimpleXMLElement $sxml
     *
     * @return boolen
     *   TRUE if given SimpleXML object is RSS feed or FALSE
     */
    protected function isRssFeed(SimpleXMLElement $sxml) {
        return $sxml->getName() == 'rss';
    }

    /**
     * Add the extra mapping sources provided by this parser.
     */
    public function getMappingSources() {
        return parent::getMappingSources() + array(
            'feed_title' => array(
                'name' => t('Feed title'),
                'description' => t('The title of the pulled feed.'),
            ),
            'guid' => array(
                'name' => t('GUID'),
            ),
            'video_id' => array(
                'name' => t('Video ID'),
                'description' => t('YouTube video unique ID.'),
            ),
            'title' => array(
                'name' => t('Video title'),
                'description' => t('Video title.'),
            ),
            'author' => array(
                'name' => t('Author'),
                'description' => t('Author or uploader of the video.'),
            ),
            'updated_datetime' => array(
                'name' => t('Updated on (Datetime)'),
            ),
            'updated_timestamp' => array(
                'name' => t('Updated on (Timestamp)'),
            ),
            'published_datetime' => array(
                'name' => t('Published on (Datetime)'),
            ),
            'published_timestamp' => array(
                'name' => t('Published on (Timestamp)'),
            ),
            'description' => array(
                'name' => t('Description'),
            ),
            'thumbnail' => array(
                'name' => t('Thumbnail'),
                'description' => t('URL of the thumbnail of the video.'),
            ),
            'category' => array(
                'name' => t('Category'),
            ),
//      'tags' => array(
//        'name' => t('Tags'),
//        'description' => t('This can be imported directly with Taxonomy "tags" vocabularies.'),
//      ),
            'non' => array(
                'name' => t('Aiaraldea:Non'),
                'description' => t('This can be imported directly with Taxonomy "non" vocabularies.'),
            ),
            'etiketak' => array(
                'name' => t('Aiaraldea:Etiketak'),
                'description' => t('This can be imported directly with Taxonomy "etiketak" vocabularies.'),
            ),
            'watch_page' => array(
                'name' => t('Watch page'),
                'description' => t('The URL of the video.'),
            ),
            'url' => array(
                'name' => t('Video URL'),
                'description' => t('The URL of the video.'),
            ),
            'duration' => array(
                'name' => t('Duration (Formatted)'),
                'description' => t('Duration of the video in HH:MM:SS format.'),
            ),
            'duration_raw' => array(
                'name' => t('Duration (Seconds)'),
                'description' => t('Duration of the video in number of seconds.'),
            ),
            'fav_count' => array(
                'name' => t('Favorite count'),
            ),
            'view_count' => array(
                'name' => t('View count'),
            ),
            'rating' => array(
                'name' => t('Rating'),
            ),
            'jatorria' => array(
                'name' => t('Jatorria'),
            ),
        );
    }

    /**
     *  Display seconds as HH:MM:SS, with leading 0's.
     *
     *  @param $seconds
     *    The number of seconds to display.
     */
    public function secsToTime($seconds) {
        // Number of seconds in an hour.
        $unith = 3600;
        // Number of seconds in a minute.
        $unitm = 60;

        // '/' given value by num sec in hour... output = HOURS
        $hh = intval($seconds / $unith);

        // Multiply number of hours by seconds, then subtract from given value.
        // Output = REMAINING seconds.
        $ss_remaining = ($seconds - ($hh * 3600));

        // Take remaining seconds and divide by seconds in a min... output = MINS.
        $mm = intval($ss_remaining / $unitm);
        // Multiply number of mins by seconds, then subtract from remaining seconds.
        // Output = REMAINING seconds.
        $ss = ($ss_remaining - ($mm * 60));

        $output = '';

        // If we have any hours, then prepend that to our output.
        if ($hh) {
            $output .= "$hh:";
        }

        // Create a safe-for-output MM:SS.
        $output .= check_plain(sprintf($hh ? "%02d:%02d" : "%d:%02d", $mm, $ss));

        return $output;
    }

    /**
     * Parse Atom feed
     *
     * @param SimpleXMLElement $sxml
     * @param FeedsImportBatch $batch
     * @param FeedsSource $source
     */
    private function parseAtom(SimpleXMLElement $sxml, FeedsImportBatch $batch, FeedsSource $source) {

        $batch->title = $feed_title = (string) $sxml->title;

        // Iterate over entries in feed
        // TODO: This is not DRY - extract things which is same in Atom and RSS20 to common method
        foreach ($sxml->entry as $entry) {
            // get video ID
            $arr = explode('/', $entry->id);
            $id = $arr[count($arr) - 1];

            // get nodes in media: namespace for media information
            $media = $entry->children('http://search.yahoo.com/mrss/');

            // get video player URL
            $attrs = $media->group->player->attributes();
            $watch = str_replace('&feature=youtube_gdata_player', '', $attrs['url']);

            // get video thumbnail
            $attrs = $media->group->thumbnail[0]->attributes();
            $thumbnail = $attrs['url'];

            // get <yt:duration> node for video length
            $yt = $media->children('http://gdata.youtube.com/schemas/2007');
            $attrs = $yt->duration->attributes();
            $length = $attrs['seconds'];

            // get <yt:stats> node for viewer statistics
            $yt = $entry->children('http://gdata.youtube.com/schemas/2007');
            $attrs = $yt->statistics->attributes();
            $viewCount = $attrs['viewCount'];
            $favCount = $attrs['favoriteCount'];

            // get <gd:rating> node for video ratings
            $gd = $entry->children('http://schemas.google.com/g/2005');
            $rating = 0;
            if ($gd->rating) {
                $attrs = $gd->rating->attributes();
                $rating = $attrs['average'];
            }

            $updated = (string) $entry->updated;
            $published = (string) $entry->published;

            $item = array(
                'feed_title' => $feed_title,
                'guid' => (string) $entry->id,
                'video_id' => $id,
                'url' => 'http://www.youtube.com/watch?v=' . $id,
                'watch_page' => $watch,
                'title' => (string) $media->group->title,
                'author' => (string) $entry->author->name,
                'description' => (string) $media->group->description,
                'thumbnail' => (string) $thumbnail,
                'category' => (string) $media->group->category,
//        'tags' => explode(',', $media->group->keywords),
                'non' => $this->extractNon((string) $media->group->keywords),
                'etiketak' => $this->extractEtiketak((string) $media->group->keywords),
                'embedded_player' => '',
                'duration' => $this->secsToTime($length),
                'duration_raw' => (integer) $length,
                'view_count' => (string) $viewCount,
                'fav_count' => (string) $favCount,
                'rating' => (string) $rating,
                'updated_datetime' => date('Y-m-d H:i:s', strtotime($updated)),
                'updated_timestamp' => strtotime($published),
                'published_datetime' => date('Y-m-d H:i:s', strtotime($published)),
                'published_timestamp' => strtotime($updated),
                'jatorria' => array('youtube'),
            );

            // Populate the FeedsImportBatch object with the parsed results.
            $batch->items[] = $item;
        }
    }

    /**
     * Parse RSS 2.0 feed
     *
     * @param SimpleXMLElement $sxml
     * @param FeedsImportBatch $batch
     * @param FeedsSource $source
     */
    private function parseRss20(SimpleXMLElement $sxml, FeedsImportBatch $batch, FeedsSource $source) {

        // XML was parsed successfully, so we can begin to process items
        $batch->title = (string) $sxml->channel->title;
        $batch->description = (string) $sxml->channel->description;
        $batch->link = (string) $sxml->channel->link;
        $feed_title = (string) $sxml->channel->title;

        // Iterate over entries in feed
        // TODO: This is not DRY - extract things which is same in Atom and RSS20 to common method
        foreach ($sxml->xpath('//item') as $entry) {

            // Get atom nodes
            $atom = $entry->children('http://www.w3.org/2005/Atom');
            $updated = $atom->updated;

            // Get video ID
            $id = end(explode('/', $entry->guid));

            // Get nodes in media: namespace for media information
            $media = $entry->children('http://search.yahoo.com/mrss/');

            // Get video player URL
            $attrs = $media->group->player->attributes();
            $player = (string) $attrs['url'];

            // Get video thumbnail
            $attrs = $media->group->thumbnail[0]->attributes();
            $thumbnail = (string) $attrs['url'];

            // Get <yt:duration> node for video length
            $yt = $media->children('http://gdata.youtube.com/schemas/2007');
            $attrs = $yt->duration->attributes();
            $length = (int) $attrs['seconds'];

            // Get <yt:stats> node for viewer statistics
            $yt = $entry->children('http://gdata.youtube.com/schemas/2007');
            $attrs = $yt->statistics->attributes();
            $viewCount = (int) $attrs['viewCount'];
            $favCount = (int) $attrs['favoriteCount'];

            // Get <gd:rating> node for video ratings
            $gd = $entry->children('http://schemas.google.com/g/2005');
            $rating = 0;
            if ($gd->rating) {
                $attrs = $gd->rating->attributes();
                $rating = (int) $attrs['average'];
            }

            $item = array(
                'feed_title' => $feed_title,
                'guid' => (string) $entry->guid,
                'video_id' => $id,
                'url' => 'http://www.youtube.com/watch?v=' . $id,
                'watch_page' => 'http://www.youtube.com/watch?v=' . $id,
                'title' => html_entity_decode((string) $media->group->title),
                'author' => (string) $entry->author,
                'description' => html_entity_decode((string) $media->group->description),
                'thumbnail' => (string) $thumbnail,
                'category' => (string) $media->group->category,
//        'tags' => explode(',', (string) $media->group->keywords),
                'non' => $this->extractNon((string) $media->group->keywords),
                'etiketak' => $this->extractEtiketak((string) $media->group->keywords),
                'embedded_player' => $player,
                'duration' => $this->secsToTime($length),
                'duration_raw' => (integer) $length,
                'view_count' => (string) $viewCount,
                'fav_count' => (string) $favCount,
                'rating' => (string) $rating,
                'updated_datetime' => date('Y-m-d H:i:s', strtotime($updated)),
                'updated_timestamp' => strtotime($updated),
                'published_datetime' => date('Y-m-d H:i:s', strtotime($entry->pubDate)),
                'published_timestamp' => strtotime($entry->pubDate),
                'jatorria' => array('youtube'),
            );

            // Populate the FeedsImportBatch object with the parsed results.
            $batch->items[] = $item;
        }
    }

    private function extractNon($tags) {
        $tags = explode(',', (string) $tags);
        foreach ($tags as $tag) {
            $tag = trim($tag);
            if ($this->startsWith($tag, 'non:')) {
                $etiketak[] = ucwords(substr($tag, 4));
            }
        }
        return $etiketak;
    }

    private function extractEtiketak($tags) {
        $tags = explode(',', (string) $tags);
        foreach ($tags as $tag) {
            $tag = trim($tag);
            if (!$this->startsWith($tag, 'non:')) {
                $etiketak[] = (string) $tag;
            }
        }
        return $etiketak;
    }

    private function startsWith($haystack, $needle) {
        $length = strlen($needle);
        return (strtolower(substr($haystack, 0, $length)) === $needle);
    }
}
