<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Swap</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Swap <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Number: <input type="number" placeholder="Enter a number" name ="n">
        <br><br>
        Number: <input type="number" placeholder="Enter a number" name ="n1">
        <br><br>
        <input type="submit" name = "submit" value="Swap" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            echo "Before Swap: <br>";
            echo $n.", " . $n1."<br>";
            echo "After Swap: <br>";
            $temp = $n;
            $n = $n1;
            $n1 = $temp;
            echo $n.", " . $n1;

        }
    ?>
</body>
</html>