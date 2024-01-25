<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Factorial <br> <br>";
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
            $f = 1;
            for($i=1;$i<=$n1; $i++){
                echo $i . "x ";
                $f = $f * $i;
            }
            echo "<br>The factorial is:". $f;
        }
    ?>
</body>
</html>