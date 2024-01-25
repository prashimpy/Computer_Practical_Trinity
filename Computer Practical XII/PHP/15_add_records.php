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

    echo "Connected to the database successfully. <br>";


    $sd = array(
        array('1','Prashim ', '12'),
        array('2','Prash', '11'),
        array('3','Prashu', '10')
    );


    foreach ($sd as $d) {
        $id = $d[0];
        $name = $d[1];
        $grade = $d[2];

        $sql = "INSERT INTO student (id, sname, sclass) VALUES ('$id','$name', '$grade')";

        if (mysqli_query($conn, $sql)) {
            echo "Record inserted successfully. <br>";
        } else {
            echo "Error inserting record: " . mysqli_error($conn) . "<br>";
        }
    }

    mysqli_close($conn);

?>
