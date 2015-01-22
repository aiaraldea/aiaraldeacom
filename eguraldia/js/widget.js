var aemetProxy = aemetProxy || (function ($) {
    var url = "http://aemetproxy-aiaraldea.rhcloud.com/";
    var day = function (container, day) {
        var full = "";
        if (!day.morning) {
            full = "full";
        }
        var element = $('<div class="aemet-day ' + full + '"></div>').appendTo(container);

        element.append('<div class="eguna">' + day.day + '</div>');
        if (day.morning) {
            period1(element, day.morning, '00-12');
        }
        period1(element, day.afternoon, '12-24');
        element.append(
                '<div class="temp"><span class="min">' + day.minTemperature + '</span> / <span class="max">' + day.maxTemperature + '</span></div>');
        if (day.morning) {
            period2(element, day.morning, '00-12');
        }
        period2(element, day.afternoon, '12-24');
    };

    var period1 = function (element, period, time) {
        element.append('<div class="aemet-period">' +
                '<div class="ordua">' + time + '</div>' +
                '<i class="wi wi-' + period.skyStatusCode + '"></i>' +
                '</div>');
    };

    var period2 = function (element, period, time) {
        element.append('<div class="aemet-period">' +
                '<div title="Prezipitazio -probabilitatea: %' + period.rain + '">%' + period.rain + '</div>' +
                '<div class="wind"><span><i class="wi wi-wind-' + period.wind.direction + '"></i></span> <span>' + period.wind.speed + '</span></div>' +
                '</div>');

    };
    var auto = function () {
        $('.aemet-eguraldia.auto').each(function (i) {
            var code;
            var container = $(this);
            code = container.data('aemet-code');
            $.get(url+"/AemetProxy/webresources/eguraldia/sinple/" + code + ".json", function (data) {
                initData(data, container);
            });
        });
    };

    var reload = function (container, code) {
        $.get(url+"/AemetProxy/webresources/eguraldia/sinple/" + code + ".json", function (data) {
            initData(data, container);
        });
    };

    var initData = function (data, container) {
        container.empty();
        $.each(data.days.day, function (k, v) {
            if (k > 2) {
                return;
            }
            day(container, v);
        });
        container.append('<div style="clear: both;" class="aemet-copy"><a href="' + data.link + '" target="_blank">&copy; AEMET</a></div>');
    };
    return {
        "auto": auto,
        "reload": reload
    };
})(jq1110);

$(document).ready(function () {
    aemetProxy.auto();
});
