<?php //DeleteAllScores.php
//check if POST fields are received, else quit

// Connect database 
include("dbconninc.php");

$query = "DELETE FROM tb_leaderboard";
$stmt = $conn->prepare($query);

$stmt->execute();

http_response_code(200);
$stmt->close();
$conn->close();

?>
