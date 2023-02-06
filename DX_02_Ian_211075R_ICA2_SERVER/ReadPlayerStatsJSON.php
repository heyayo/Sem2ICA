<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

if (!isset($_POST["username"])) die("nosted");

$username = $_POST["username"];

$query = "SELECT level,xp,cash,timesPLayed,Prestige FROM tb_playerstats WHERE username = '$username';";

$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->bind_result($level,$xp,$cash,$timesPlayed,$prestige);

$stmt->fetch();
$item = array("username" => $username, "xp" => $xp, "level" => $level, "cash" => $cash, "timesPlayed" => $timesPlayed, "prestige" => $prestige);
//array_push($jsonarray,$item);

echo json_encode($item);

$stmt->close();
$conn->close();

http_response_code(200);
?>

