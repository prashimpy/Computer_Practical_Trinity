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
        echo "Program: String length <br> <br>";
    ?>

    <form method="POST"  name="myform">
        String : <input type="Text" placeholder="Enter a string" name ="s">
        <br><br>
        <input type="submit" name = "submit" value="Find Length" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            $l = strlen($s);
            echo "The length of the string is: ".$l;

        }
    ?>
</body>
</html>