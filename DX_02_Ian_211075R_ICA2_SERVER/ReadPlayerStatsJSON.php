<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

$query = "SELECT username,level,xp,cash FROM tb_playerstats;";

$stmt = $conn->prepare($query);
$stmt->bind_result($username,$level,$xp,$cash);
$stmt->execute();

$stmt->fetch();
$jsonarray = Array();
$item = array("username" => $username, "level" => $level, "xp" => $xp, "cash" => $cash);
array_push($jsonarray,$item);

http_response_code(200);
echo json_encode($jsonarray);

$stmt->close();
$conn->close();

?>

