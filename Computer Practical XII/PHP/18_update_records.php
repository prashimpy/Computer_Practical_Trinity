<?php

    echo "Author: Prashim Timsina <br>";
    echo "Program: Insert Records into Database <br> <br>";


    $host = 'localhost';   
    $username = 'root';    
    $password = '';         
    $database = 'student';  


    $conn = mysqli_connect($host, $username, $password, $database);


    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

    echo "Connected to the database successfully. <br><br>";
    $sql1 = "UPDATE student SET sname = 'timsina', sclass = '13' WHERE id = 2";

    if (mysqli_query($conn, $sql1)) {
        echo "Record with ID 2 updated successfully. <br>";
    } else {
        echo "Error updating record : " . mysqli_error($conn) . "<br>";
    }

    $sql = "select * from student";

    $r = mysqli_query($conn, $sql);

    if ($r) {
        echo "<br>Records of : <br>";

        while ($row = mysqli_fetch_assoc($r)) {
            echo "Name: " . $row['sname'] . ", Grade: " . $row['sclass'] . "<br>";
        }

    } else {
        echo "Error showing record: " . mysqli_error($conn) . "<br>";
    }


    mysqli_close($conn);

?>
