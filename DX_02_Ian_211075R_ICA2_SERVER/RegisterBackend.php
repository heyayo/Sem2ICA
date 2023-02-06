<?php
// Connect database //AddScore.php
include('dbconninc.php');
//check if POST fields are received, else quit

if (!isset($_POST["sUsername"]) || !isset($_POST["sPassword"]) || !isset($_POST["sEmail"])) die("not posted");
$sUsername = $_POST["sUsername"];
$sPassword = $_POST["sPassword"];
$sEmail = $_POST["sEmail"];

$query = "SELECT username,email FROM tb_users WHERE username = '$sUsername' or email = '$sEmail';";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->store_result();
$stmt->fetch();
$rows = $stmt->num_rows();
if ($rows > 0)
{
    die("Username Or Email Taken");
}

$query = "INSERT INTO tb_users (username,password,email) values (?,?,?);";
$stmt = $conn->prepare($query);
$stmt->bind_param("sss",$sUsername,$sPassword,$sEmail);
$stmt->execute();
$stmt->close();

$query = "INSERT INTO tb_playerstats (username,level,xp,cash,timesPlayed,Prestige) values ('$sUsername',0,0,0,0,0);";
$stmt = $conn->prepare($query);
$stmt->execute();
$stmt->close();

$conn->close();

echo "Registed As $sUsername";
http_response_code(200);

?>
