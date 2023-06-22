<?php
    session_start();
    if(!isset($_SESSION['email'])){
        header('Location:../BaiTap/login_page.php');
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1 align='center' style="color: red;">Chào mừng <?php echo $_SESSION['email'] ?> đến với website của chúng tôi.</h1>
    <div align='center'>
        <img src="https://triggerm.digital/wp-content/uploads/sites/2/2020/09/Untitled-design-12-1.png" alt="">
    </div>
</body>
</html>
