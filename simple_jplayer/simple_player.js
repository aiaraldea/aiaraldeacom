(function(jQuery){ 
  jQuery( document ).ready(function() {
    jQuery(".audio-jp").each(function(i, e){
      var p = jQuery(e),
      id = p.attr('id');
      p.mb_miniPlayer({preload:'none'});
      jQuery('#JPL_mp_'+id)
        .on(jQuery.jPlayer.event.play, function (event) {
          //playerTime grabs the current % location on the file being played.
          //if they’re at the beginning it’s 0. If they’re at the end it’s 100. Etc.
          var playerTime = Math.round(event.jPlayer.status.currentPercentAbsolute);
          //grabs the media currently being played. Usefull for when multiple files are played in the player.
          var mediaName = event.jPlayer.status.src;
          //track it as an event with category:jPlayer, action:Play, label:Name of the file being played, value:location on file as %
	  if (typeof _gaq != 'undefined') {
            _gaq.push(['_trackEvent', 'jPlayer', 'Play',mediaName,playerTime]);
	  }
	})
        .on(jQuery.jPlayer.event.pause, function (event) {
          //as above, grabbing the % location and media being played
          var playerTime = Math.round(event.jPlayer.status.currentPercentAbsolute);
          var mediaName = event.jPlayer.status.src;
          //We’ll only track the “pause” if the percent value is less than 100. This is because at 100%
          //when the player ends, it will send a pause event with the end event.
          //we don’t need that duplication in GA
          if(playerTime<100){
                  //tracking the pause with similar setup to the play event
	    if (typeof _gaq != 'undefined') {
              _gaq.push(['_trackEvent', 'jPlayer', 'Pause',mediaName,playerTime]);
	    }
          }	  
	})
        .on(jQuery.jPlayer.event.ended, function (event) {
          //as above, grabbing the % location and media being played
          //except when it ends we force the value as 100%, otherwise it shoots back as 0
          var playerTime = 100;
          var mediaName = event.jPlayer.status.src;
          //track the End event as above.
	  if (typeof _gaq != 'undefined') {
            _gaq.push(['_trackEvent', 'jPlayer', 'Ended',mediaName,playerTime]);
	  }
	})
        .on(jQuery.jPlayer.event.seeking, function (event) {
          //as above, grabbing the % location and media being played
          var playerTime = Math.round(event.jPlayer.status.currentPercentAbsolute);
          var mediaName = event.jPlayer.status.src;
          //tracking the seeking action similar to above
	  if (typeof _gaq != 'undefined') {
            _gaq.push(['_trackEvent', 'jPlayer', 'Seeking',mediaName,playerTime]);
	  }
	})
        .on(jQuery.jPlayer.event.seeked, function (event) {
          //as above, grabbing the % location and media being played
          var playerTime = Math.round(event.jPlayer.status.currentPercentAbsolute);
          var mediaName = event.jPlayer.status.src;
          //There’s some overlap between the seeked and stopped events. When a user clicks
          // the stop button it actually sends a “seek” to the 0 location. So if the seeked location is 0
          // then we track it as a stop, if it’s greater than 0, it was an actual seek.
          if(playerTime>0){
            //track the seeked event as above
	    if (typeof _gaq != 'undefined') {
              _gaq.push(['_trackEvent', 'jPlayer', 'Seeked',mediaName,playerTime]);
	    }
          } else {
            //track the stopped event as above
	    if (typeof _gaq != 'undefined') {
              _gaq.push(['_trackEvent', 'jPlayer', 'Stopped',mediaName,playerTime]);
	    }
          }
	})
    });
  });  
})(jq1110)
