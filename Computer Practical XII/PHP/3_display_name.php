<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dipslay Name</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Display Name <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Name: <input type="Text" placeholder="Enter Your Name" name ="n">
        <br><br>
        Address: <input type="Text" placeholder="Enter Your Address" name ="a">
        <br><br>
        <input type="submit" name = "submit" value="Display" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            echo "Name: ". $n. "\r\n";
            echo "Address: ".$a;

        }
    ?>
</body>
</html>