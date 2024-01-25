<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Print Strings in Array</title>
</head>
<body>
    <?php
        echo "Author: Prashim Timsina <br>";
        echo "Program: Store Strings in Array <br> <br>";
        $as = array();
    ?>

    <form method="POST"  name="myform">
        <?php
            for($i = 0; $i < 5; $i++){
                echo "String $i: <input type='text' name='s$i'><br><br>";
            }
        ?>
        <input type="submit" name = "submit" value="Display" >
        <br><br>
    </form>
    <?php
        if(isset($_POST['submit'])){
            extract($_POST);
            for($i = 0; $i < 5; $i++){
                $ts = $_POST["s". $i];
                $as[$i] = $ts;
            }
            echo "Strings in the array:<br> ";
            foreach ($as as $s) {
                echo $s . ', ';
            }
        }
    ?>
</body>
</html>

