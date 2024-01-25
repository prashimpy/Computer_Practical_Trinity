<?php

    echo "Author: Prashim Timsina <br>";
    echo "Program: Show Records <br> <br>";


    $host = 'localhost';   
    $username = 'root';    
    $password = '';         
    $database = 'student';  


    $conn = mysqli_connect($host, $username, $password, $database);


    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

    echo "Connected to the database successfully. <br><br>";

    $sql = "select * from student where sclass = '11'";
    $r = mysqli_query($conn, $sql);

    if ($r) {
        echo "Records of Grade 11 Students: <br>";

        while ($row = mysqli_fetch_assoc($r)) {
            echo "Name: " . $row['sname'] . ", Grade: " . $row['sclass'] . "<br>";
        }

    } else {
        echo "Error inserting record: " . mysqli_error($conn) . "<br>";
    }


    mysqli_close($conn);

?>
