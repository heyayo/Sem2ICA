<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

if (!isset($_POST["username"])) die("nosted");

$username = $_POST["username"];

$query = "DELETE FROM tb_users WHERE username='$username';";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->close();

$query = "DELETE FROM tb_playerstats WHERE username='$username';";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->close();

$query = "DELETE FROM tb_leaderboard WHERE username = '$username';";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->close();

http_response_code(200);
$stmt->close();
$conn->close();

?>

