<?php //ReadScoreBoardJSON.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)

$query="SELECT username,score,recordDate,finishTime FROM tb_leaderboard ORDER BY score DESC";
$stmt = $conn->prepare($query);
// Execute Statement

//Bind results to variables
$stmt->execute();
$stmt->bind_result($sPlayerName,$iScore,$recordDate, $finish);
// Fetch Results (select)
$jsonarray = Array();
$jsonarray["scores"] = Array();
while($stmt->fetch()){
	$item = Array("username" => $sPlayerName, "score" => $iScore, "recordDate" => $recordDate, "time" => $finish);
	array_push($jsonarray["scores"],$item);
}
http_response_code(200);
echo json_encode($jsonarray);
$stmt->close();
// Close connection
$conn->close();

?>
