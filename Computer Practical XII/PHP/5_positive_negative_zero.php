<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Positive or Negative or Zero</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Positive or Negative or Zero <br> <br>";
    ?>

    <form method="POST"  name="myform">
        Number: <input type="number" placeholder="Enter Number" name ="n1">
        <br><br>
        <input type="submit" name = "submit" value="Check" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            if ($n1>0){
                echo "Positive";
            }
            else if($n1<0){
                echo "Negative";
            }
            else if($n1 = 0){
                echo "Zero";
            }

        }
    ?>
</body>
</html>