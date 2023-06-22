$(document).ready(function() {
    $(window).scroll(function(event) {
        var pos_body = $('html,body').scrollTop();
        if (pos_body > 1200) {
            $('.lendau').addClass('hien-ra');
        } else {
            $('.lendau').removeClass('hien-ra');
        }
    });
    $('.lendau').click(function(event) {
        $('html,body').animate({ scrollTop: 0 }, 1400);
    });
});