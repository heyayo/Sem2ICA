<?php //AddScoreBackEnd.php
//check if POST fields are received, else quit

// Connect database 
include("dbconninc.php");
// Prepare Statement...? denotes to link to php variables later

if (!isset($_POST["sPlayerName"]) || !isset($_POST["iScore"]) || !isset($_POST["finish"])) die("nosted");

$username = $_POST["sPlayerName"];
if ($username == "GuestPlayer") die("GUEST PLAYER");
$score = $_POST["iScore"];
$fTime = $_POST["finish"];

$query = "SELECT score,finishTime FROM tb_leaderboard WHERE username = '$username'";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->store_result();
$stmt->bind_result($bestscore, $bestTime);
$stmt->fetch();
$rows = $stmt->num_rows();
$stmt->close();

echo "$bestTime<br>";
echo "$fTime<br>";

if ($rows == 0)
{
    $query = "INSERT INTO tb_leaderboard (username,score,recordDate,finishTime) values ('$username',$score,(SELECT NOW()),$fTime);";
    $stmt = $conn->prepare($query);
    $stmt->execute();
    $stmt->close();
}
else
{
    if ($score > $bestscore)
    {
        if ($bestTime < $fTime)
        {
            $query = "UPDATE tb_leaderboard SET score = $score, finishTime = $fTime, recordDate = (SELECT NOW()) WHERE username = '$username'";
        }else
        {
            $query = "UPDATE tb_leaderboard SET score = $score, recordDate = (SELECT NOW()) WHERE username = '$username'";
        }
        $stmt = $conn->prepare($query);
        $stmt->execute();
        $stmt->close();
    } else if ($bestTime < $fTime)
    {
        $query = "UPDATE tb_leaderboard SET finishTime = $fTime, recordDate = (SELECT NOW()) WHERE username = '$username'";
        $stmt = $conn->prepare($query);
        $stmt->execute();
        $stmt->close();
    }
}

http_response_code(200);

$conn->close();

?>
