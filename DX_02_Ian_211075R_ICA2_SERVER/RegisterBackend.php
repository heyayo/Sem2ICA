<?php
// Connect database //AddScore.php
include('dbconninc.php');
//check if POST fields are received, else quit

if (!isset($_POST["sUsername"]) || !isset($_POST["sPassword"]) || !isset($_POST["sEmail"])) die("not posted");
$sUsername = $_POST["sUsername"];
$sPassword = $_POST["sPassword"];
$sEmail = $_POST["sEmail"];

echo "Received Info: $sUsername | $sPassword | $sEmail";

$query = "INSERT INTO tb_users (username,password,email) values (?,?,?);";
$stmt = $conn->prepare($query);
$stmt->bind_param("sss",$sUsername,$sPassword,$sEmail);
$stmt->execute();
echo "<p> Rows Added: $stmt->affected_rows";
$stmt->close();

$query = "INSERT INTO tb_playerstats (username,level,xp,cash) values ('$sUsername',0,0,0);";
$stmt = $conn->prepare($query);
$stmt->execute();
echo "<p> Rows Added: $stmt->affected_rows";
$stmt->close();

$conn->close();

http_response_code(200);

?>
