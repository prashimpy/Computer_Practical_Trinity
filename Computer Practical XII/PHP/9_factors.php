<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factor</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Factor <br> <br>";
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
            echo "<br>The Factors of $n1 Are: <br>";

            for ($i = 1; $i <= $n1; $i++) {
                if ($n1 % $i == 0) {
                    echo $i . ', ';
                }
            }
        }
    ?>
</body>
</html>