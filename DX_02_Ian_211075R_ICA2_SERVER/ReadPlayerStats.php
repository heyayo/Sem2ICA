<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

if (!isset($_POST["username"])) die("not posted");
$username = $_POST["username"];

$query = "SELECT level,xp,cash FROM tb_playerstats WHERE username = '$username';";
$stmt = $conn->prepare($query);

$stmt->bind_result($level,$xp,$cash);
$stmt->execute();
$stmt->fetch();

echo "Username: $username | Level: $level | XP: $xp | Cash: $cash";

http_response_code(200);
$stmt->close();
$conn->close();

?>

