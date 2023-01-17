<?php //ReadScoreBoardJSON.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

$query="select username,score from tb_leaderboard";
$stmt=$conn->prepare($query);
// Execute Statement

//Bind results to variables
$stmt->bind_result($sPlayerName,$iScore);
$stmt->execute();
// Fetch Results (select)
$jsonarray = Array();
while($stmt->fetch()){
	$item = array("username" => $sPlayerName, "score" => $iScore);
	array_push($jsonarray,$item);
}
http_response_code(200);
echo json_encode($jsonarray);
$stmt->close();
// Close connection
$conn->close();
?>
