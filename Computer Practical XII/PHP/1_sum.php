<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sum</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Sum <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Number: <input type="number" placeholder="Enter a number" name ="n">
        <br><br>
        Number: <input type="number" placeholder="Enter a number" name ="n2">
        <br><br>
        <input type="submit" name = "submit" value="sum" >
        <br><br>
    </form>

    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            echo "Sum of ". $n." + ".$n2." is ".  $n + $n2;
        }
    ?>
</body>
</html>