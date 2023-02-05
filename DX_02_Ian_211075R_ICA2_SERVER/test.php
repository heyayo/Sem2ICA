<?php //AddScoreBackEnd.php
// Connect database
include("dbconninc.php");
if (!isset($_POST["sPlayerName"]) || !isset($_POST["iScore"]))die("not posted!");
// Get score from tb_leaderboard
$username = $_POST["sPlayerName"];
$score = $_POST["iScore"];
$query = "select score from tb_leaderboard where username = ?";
$stmt = $conn->prepare($query);
$stmt->bind_param("s", $username);
$stmt->execute();
$stmt->store_result();
$stmt->bind_result($highest);
$stmt->fetch();
$rows = $stmt->num_rows();
$stmt->close();
if ($rows == 0){
    $query = "insert into tb_leaderboard (username, score) values (?,?)"; // Changed Syntax from "insert into tb_leaderboard (username, score) values (username = ?, score = ?)" to "insert into tb_leaderboard (username, score) values (?,?)"
    $stmt = $conn->prepare($query);
    $stmt->bind_param("si",$username,$score); // ADDED
    $stmt->execute();
    $stmt->close();
}
elseif($score > $highest)
{
    $query = "update tb_leaderboard set score = ? where username = ?";
    $stmt = $conn->prepare($query);
    $stmt->bind_param("si",$username,$score); // ADDED
    $stmt->execute();
    $stmt->close();
}
$conn->close();
?>