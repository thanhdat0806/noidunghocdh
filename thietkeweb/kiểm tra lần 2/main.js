function thanhsonLoginForm() {
    var user = document.getElementById("thanhson-username").value;
    var pw = document.getElementById("thanhson-password").value;

    if (user == "" || pw == "") {
        document.getElementById("thanhson-error1").style.display = "block";
    } else {
        document.getElementById("thanhson-error2").style.display = "block";
    }
}