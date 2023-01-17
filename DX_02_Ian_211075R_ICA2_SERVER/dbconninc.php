<?php //dbconninc.php
// database settings
$hostaddress="localhost";
$dbuser="webu";
$password="";
$dbname="db_02_Ian_211075R_ICA2"; //change to the dbname based on your naming convention
// Connect database
$conn=new mysqli($hostaddress,$dbuser,$password,$dbname);
?>
