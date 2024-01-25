<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>String Validation</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: String Validation <br> <br>";
    ?>

    <form method="POST"  name="myform">
        String 1: <input type="Text" placeholder="Enter a string" name ="s">
        <br><br>
        String 2: <input type="text" placeholder="Enter a string" name ="s1">
        <br><br>
        <input type="submit" name = "submit" value="Validate" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            if($s1 == $s){
                echo 'They are same';
            }
            else{
                echo 'They are not same';
            }

        }
    ?>
</body>
</html>