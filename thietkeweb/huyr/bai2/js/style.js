function datLoginForm() {
    var user = document.getElementById("dat-username").value;
    var pw = document.getElementById("dat-password").value;

    if ((user == "" || pw == "") || (checkEmail() == false)) {
        document.getElementById("dat-error").innerHTML = "Sai thông tin đăng nhập, vui lòng nhập lại!";
    } else {
        document.getElementById('dat-error').innerHTML = 'Chúc mừng bạn đã đăng nhập thành công!';
        $(function() {
            $("#dat-form-login").hide();
            $("#dat-form-login1").show();
        });
        var us = document.getElementById('dat-username').value;
        document.getElementById('us').value = us;
        var pass = document.getElementById('dat-password').value;
        document.getElementById('pass').value = pass;
    }
}

function checkEmail() {
    var email = document.getElementById('dat-username');
    var filter = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
    if (!filter.test(email.value)) {
        return false;
    } else {
        return true;
    }
}

function logout() {
    $(function() {
        $("#dat-form-login").show();
        $("#dat-form-login1").hide();
    });
}