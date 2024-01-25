<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Greatest Number</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Greatest Number <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Number 1: <input type="number" placeholder="Enter Number 1" name ="n1">
        <br><br>
        Number 2: <input type="number" placeholder="Enter Number 2" name ="n2">
        <br><br>
        Number 3: <input type="number" placeholder="Enter Number 3" name ="n3">
        <br><br>
        <input type="submit" name = "submit" value="Display" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            if ($n1>$n2 && $n1>$n3){
                echo $n1 ." is greatest";
            }
            else if($n2>$n1 && $n2>$n3){
                echo $n2 ." is greatest";
            }
            else {
                echo $n3 ."is greatest";
            }

        }
    ?>
</body>
</html>