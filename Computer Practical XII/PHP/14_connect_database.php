<?php

    echo "Author: Prashim Timsina <br>";
    echo "Program: Connect to Database <br> <br>";


    $host = 'localhost';    // Change this to your database host
    $username = 'root';     // Change this to your database username
    $password = '';         // Change this to your database password
    $database = 'student';  // Change this to your database name


    $conn = mysqli_connect($host, $username, $password, $database);

    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

    echo "Connected to the database successfully.";

    mysqli_close($conn);
?>
