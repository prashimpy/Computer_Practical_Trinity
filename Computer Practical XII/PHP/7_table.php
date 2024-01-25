<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Multiplication Table</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Multiplication Table <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Number: <input type="number" placeholder="Enter Number" name ="n1">
        <br><br>
        <input type="submit" name = "submit" value="Display" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            $i = 0;
            for($i=1;$i<=10; $i++){
                echo $n1 . " x ". $i . " = " . $i*$n1 . "<br>";
            }

        }
    ?>
</body>
</html>