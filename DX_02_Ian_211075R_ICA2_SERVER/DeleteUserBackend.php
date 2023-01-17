<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

if (!isset($_POST["username"])) die("nosted");

$username = $_POST["username"];

$query = "DELETE FROM tb_users WHERE username='$username'; DELETE FROM tb_playerstats WHERE username='$username'; DELETE FROM tb_leaderboard WHERE username = '$username';";
$stmt = $conn->prepare($query);

$stmt->execute();

http_response_code(200);
$stmt->close();
$conn->close();

?>

