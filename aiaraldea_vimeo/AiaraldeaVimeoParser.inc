<?php

// $Id: FeedsVimeoParser.inc,v 1.10 2011/01/31 22:57:28 wojtha Exp $

/**
 * @file
 * Feeds parser class for Vimeo
 */
// this needs to use libraries.
require('sites/all/libraries/vimeo-php-lib/vimeo.php');

/**
 * Class definition for Vimeo Parser.
 *
 * Parses RSS or Atom feeds returned from YouTube API like.
 */
class AiaraldeaVimeoParser extends FeedsParser {

    /**
     * Parse the extra mapping sources provided by this parser.
     *
     * @param $fetcher_result FeedsFetcherResult
     * @param $source FeedsSource
     *
     * @see FeedsParser::parse()
     */
    public function parse(FeedsImportBatch $batch, FeedsSource $source) {

        $vimeo = new phpVimeo($this->config['vimeo_key'], $this->config['vimeo_secret']);

        $options = array('full_response' => TRUE);
        if ($this->config['vimeo_user_id'])
            $options['user_id'] = $this->config['vimeo_user_id'];

        $result = $vimeo->call('vimeo.' . $this->config['vimeo_data_request'], $options);

        # figure out how many pages we need to request
        $pages = ceil($result->videos->total / 50);

        $videos = array();
        for ($i = 1; $i <= $pages; $i++) {
            $options['page'] = $i;
            $result = $vimeo->call('vimeo.' . $this->config['vimeo_data_request'], $options);

            foreach ($result->videos->video as $video) {
                $videos[$video->id] = $video;
            }
        }

        if ($result->stat == 'ok') {
            $results = $this->buildItems($videos, $batch);
        } else {
            throw new Exception(t($result->err->msg), $result->err->code);
        }
    }

    /**
     * Add the extra mapping sources provided by this parser.
     */
    public function getMappingSources() {
        return parent::getMappingSources() + array(
            'guid' => array(
                'name' => t('GUID'),
            ),
            'video_id' => array(
                'name' => t('Video ID'),
                'description' => t('Vimeo video unique ID.'),
            ),
            'video_height' => array(
                'name' => t('Video Height'),
            ),
            'video_width' => array(
                'name' => t('Video Width'),
            ),
            'title' => array(
                'name' => t('Video title'),
                'description' => t('Video Title.'),
            ),
            'owner_id' => array(
                'name' => t('Owner ID'),
            ),
            'owner_displayname' => array(
                'name' => t('Owner Display Name'),
            ),
            'owner_realname' => array(
                'name' => t('Owner Real Name'),
            ),
            'owner_username' => array(
                'name' => t('Owner User Name'),
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
            'thumbnail_uri' => array(
                'name' => t('Thumbnail URI'),
            ),
            'thumbnail_height' => array(
                'name' => t('Thumbnail Height'),
            ),
            'thumbnail_width' => array(
                'name' => t('Thumbnail Width'),
            ),
            'watch_page' => array(
                'name' => t('Watch page'),
                'description' => t('The URL of the video.'),
            ),
            'watch_page_mobile' => array(
                'name' => t('Mobile Watch page'),
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
            'view_count' => array(
                'name' => t('View count'),
            ),
            'number_of_likes' => array(
                'name' => t('Number of Likes'),
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

    private function buildItems($videos, $result) {


        // Iterate over entries in feed
        // TODO: This is not DRY - extract things which is same in Atom and RSS20 to common method
        foreach ($videos as $video) {

            $item = array(
                'guid' => (string) $video->id,
                'video_id' => $video->id,
                'video_height' => $video->height,
                'video_width' => $video->width,
                'watch_page' => $video->urls->url[0]->_content,
                'watch_page_mobile' => $video->urls->url[1]->_content,
                'title' => $video->title,
                'owner_id' => $video->owner->id,
                'owner_displayname' => $video->owner->display_name,
                'owner_realname' => $video->owner->realname,
                'owner_username' => $video->owner->username,
                'description' => $video->description,
                'thumbnail_uri' => $video->thumbnails->thumbnail[2]->_content,
                'thumbnail_height' => $video->thumbnails->thumbnail[2]->height,
                'thumbnail_width' => $video->thumbnails->thumbnail[2]->width,
                'duration' => $this->secsToTime($video->duration),
                'duration_raw' => $video->duration,
                'view_count' => $video->number_of_plays,
                'number_of_likes' => $video->number_of_likes,
                'updated_datetime' => date('Y-m-d H:i:s', strtotime($video->modified_date)),
                'updated_timestamp' => strtotime($video->modified_date),
                'published_datetime' => date('Y-m-d H:i:s', strtotime($video->upload_date)),
                'published_timestamp' => strtotime($video->upload_date),
//        'tags' => explode(',', $media->group->keywords),
                'non' => $this->extractNon($video->tags),
                'etiketak' => $this->extractEtiketak($video->tags),
                'jatorria' => array('vimeo'),
            );

            // Populate the FeedsFetcherResult object with the parsed results.
            $result->items[] = $item;
        }
    }

    /**
     * Override parent::configDefaults().
     */
    public function configDefaults() {
        return array(
            'vimeo_key' => '',
            'vimeo_secret' => '',
            'vimeo_user_id' => '',
            'vimeo_data_request' => 'videos.getAll',
        );
    }

    public function configForm(&$form_state) {
        $form = array();

        $form['auth'] = array(
            '#type' => 'fieldset',
            '#title' => t('Api Authorization'),
            '#tree' => FALSE,
        );

        $form['auth']['vimeo_key'] = array(
            '#type' => 'textfield',
            '#title' => t('Vimeo Consumer Key'),
            '#default_value' => $this->config['vimeo_key'],
        );

        $form['auth']['vimeo_secret'] = array(
            '#type' => 'textfield',
            '#title' => t('Vimeo Consumer Secret'),
            '#default_value' => $this->config['vimeo_secret'],
        );

        $form['reqest'] = array(
            '#type' => 'fieldset',
            '#title' => t('Data to request'),
            '#tree' => FALSE,
        );

        $form['reqest']['vimeo_data_request'] = array(
            '#type' => 'select',
            '#title' => t('Request method'),
            '#default_value' => $this->config['vimeo_data_request'],
            '#description' => t('To see a list of methods view <a href="!vimeo_method_list" target="_blank">Vimeo\'s Advanced API Method List</a>', array('!vimeo_method_list' => 'http://vimeo.com/api/docs/methods')),
            '#options' => array(
                'Videos' => array(
                    'videos.getAll' => 'getAll',
                    'videos.getUploaded' => 'getUploaded',
                )
            ),
        );

        $form['reqest']['vimeo_user_id'] = array(
            '#type' => 'textfield',
            '#title' => t('User ID'),
            '#default_value' => $this->config['vimeo_user_id'],
            '#description' => 'This is not required by all methods.',
        );

        return $form;
    }

    public function configFormValidate(&$values) {
        if (empty($values['vimeo_key'])) {
            form_set_error('vimeo_key', t('Enter Vimeo Key'));
        }

        if (empty($values['vimeo_secret'])) {
            form_set_error('vimeo_secret', t('Enter Vimeo Secret'));
        }
    }

    public function configFormSubmit(&$values) {
        parent::configFormSubmit($values);
    }

    private function extractNon($tags) {
        foreach ($tags->tag as $tag) {
            $tag = trim($tag->normalized);
            if ($this->startsWith($tag, 'non:')) {
                $etiketak[] = ucwords(substr($tag, 4));
            }
        }
        return $etiketak;
    }

    private function extractEtiketak($tags) {
        foreach ($tags->tag as $tag) {
            $tag = trim($tag->normalized);
            if (!$this->startsWith($tag, 'non:')) {
                $etiketak[] = (string) $tag;
            }
        }
        return $etiketak;
    }

    private function startsWith($haystack, $needle) {
        $length = strlen($needle);
        return (substr($haystack, 0, $length) === $needle);
    }

}