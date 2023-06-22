function thanhdatLoginForm() {
    var user = document.getElementById("thanhdat_username").value;
    var pw = document.getElementById("thanhdat_password").value;

    if ((user == "" || pw == "") || (thanhdatcheckEmail() == false)) {
        document.getElementById("thanhdat_error").style.innerHTML = "Sai thông tin đăng nhập, vui lòng nhập lại!";
    } else {
        document.getElementById("thanhdat_error").style.innerHTML = "Chúc mừng bạn đã đăng nhập thành công!";
        $(function() {
            //$("#thanhdat_main").css('display', 'none');
        });
    }
}

function thanhdatcheckEmail() {
    var email = document.getElementById('thanhdat_username');
    var filter = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
    if (!filter.test(email.value)) {
        return false;
    } else {
        return true;
    }
}