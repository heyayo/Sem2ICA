<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");

// $conn | connection to db
// Prepare Statement (SQL query)

// Received Data From Unity Else stop php code same as return;
if (!isset($_POST["username"])) die("nosted");

// Save Unity's Data Into PHP Variable
$username = $_POST["username"];

$query = "DELETE FROM tb_users WHERE username='$username';";
// SQL Query To Run
$stmt = $conn->prepare($query);
// SQL Statement Variable
$stmt->execute();
// Run SQL Code
// Fetch Result | Returns what SQL returns | $stmt->fetch();
$stmt->close();
// Finish Statement

$query = "DELETE FROM tb_playerstats WHERE username='$username';";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->close();

$query = "DELETE FROM tb_leaderboard WHERE username = '$username';";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->close();

http_response_code(200);
$conn->close();

?>

