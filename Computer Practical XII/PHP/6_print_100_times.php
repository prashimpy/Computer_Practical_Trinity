<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Print your name 100 times</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Print your name 100 times <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Name: <input type="text" placeholder="Enter your name" name ="n1">
        <br><br>
        <input type="submit" name = "submit" value="Display" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            $i = 0;
            for($i=0;$i<100;$i++){
                echo $n1."\r\n";
            }

        }
    ?>
</body>
</html>