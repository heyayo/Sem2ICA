<?php

include("dbconninc.php");

$query = "SELECT username,level,xp,cash,timesPlayed,Prestige FROM tb_playerstats ORDER BY Prestige DESC, level DESC;";
$stmt = $conn->prepare($query);

$stmt->execute();
$stmt->bind_result($username,$level,$xp,$cash,$tPlayed,$prestige);

$jason = Array();
$jason["entries"] = Array();

while ($stmt->fetch())
{
    $entry = Array("username" => $username, "level" => $level, "xp" => $xp, "cash" => $cash, "timesPlayed" => $tPlayed, "prestige" => $prestige);
    array_push($jason["entries"],$entry);
}

echo json_encode($jason);

$stmt->close();
$conn->close();

?>