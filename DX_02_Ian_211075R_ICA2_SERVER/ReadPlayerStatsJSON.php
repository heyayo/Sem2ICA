<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

if (!isset($_POST["username"])) die("nosted");

$username = $_POST["username"];

$query = "SELECT level,xp,cash FROM tb_playerstats WHERE username = '$username';";

$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->bind_result($level,$xp,$cash);

$stmt->fetch();
$jsonarray = Array();
$jsonarray[''] = Array();
$item = array("username" => $username, "level" => $level, "xp" => $xp, "cash" => $cash);
array_push($jsonarray[''],$item);

http_response_code(200);
echo json_encode($jsonarray);

$stmt->close();
$conn->close();

?>

