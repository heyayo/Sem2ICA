<?php //AddScoreBackEnd.php
//check if POST fields are received, else quit

// Connect database 
include("dbconninc.php");
// Prepare Statement...? denotes to link to php variables later

if (!isset($_POST["sPlayerName"]) || !isset($_POST["iScore"])) die("nosted");

$username = $_POST["sPlayerName"];
$score = $_POST["iScore"];

$query = "SELECT score FROM tb_leaderboard WHERE username = '$username'";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->store_result();
$stmt->bind_result($bestscore);
$stmt->fetch();
$rows = $stmt->num_rows();

if ($rows == 0)
{
    $stmt->close();
    $query = "INSERT INTO tb_leaderboard (username,score) values ('$username',$score)";
    $stmt = $conn->prepare($query);
    $stmt->execute();
}
else
{
    $stmt->close();
    if ($score > $bestscore)
    {
        $query = "UPDATE tb_leaderboard SET score = $score WHERE username = '$username'";
        $stmt = $conn->prepare($query);
        $stmt->execute();
        $stmt->close();
    }
}

http_response_code(200);

$conn->close();

?>
