(function ($) {

    $(document).ready(function () {
        $.openxtag('init', {
            delivery: publizitatea.delivery,
            deliverySSL: publizitatea.deliverySSL
        });
        
        $('.openx-ad').each(function(i, e) {
            var item = $(e);
            var zone = item.attr('data-openx-zone-id');
            item.openxtag('zone', zone);
        });
    });

})(jq1110);