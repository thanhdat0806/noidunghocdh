<?php
session_start();
use LDAP\Result;

	include 'config.php';
	if(isset($_POST['register']) && $_POST['email'] != '' && $_POST['pass'] != '' && $_POST['repass'] != '' ){
        $name = $_POST['name'];
        $email = $_POST['email'];
        $pass = ($_POST['pass']);
        $repass = $_POST['repass'];
        if($pass != $repass){
            $_SESSION['thongbao'] = "Mật khẩu không trùng khớp!";   
            header('Location:../BaiTap/registration.php');
            die();
        }
        $query = "SELECT * FROM user where Email = '$email'";
        $result = mysqli_query($conn,$query);
        $password = md5($pass);
        if(mysqli_num_rows($result) > 0){
            $_SESSION['thongbao'] = "Email đã tồn tại!";   
            header('Location:../BaiTap/registration.php');
            die();
        }
        $query = "INSERT INTO user(Name,Email,Password) VALUE ('$name','$email','$password')";
        $result=mysqli_query($conn,$query);
        header('Location:../BaiTap/successful_message.html');
    }

    if(isset($_POST['login']) && $_POST['email'] != '' && $_POST['pass'] != ''){
        $email = $_POST['email'];
        $_SESSION["email"] = $email;
        $pass = $_POST['pass'];
        $password = md5($pass);
        $query = "SELECT * FROM user WHERE Email='$email' and Password ='$password'";
        $result = mysqli_query($conn,$query);
        if(mysqli_num_rows($result)!=0){
            header('Location:../BaiTap/hello.php');
        }
        else{
            $_SESSION['thongbao1'] = "Email hoặc mật khẩu chưa chính xác!";
            header('Location:../BaiTap/login_page.php');
            die();
        }
    }
?>
