<?php
include("dbconninc.php");

if (!isset($_POST["sUsername"]) || !isset($_POST["sPassword"])) die("not posted");
$password = $_POST["sPassword"];
$username = $_POST["sUsername"];

$query = "SELECT username FROM tb_users WHERE password = '$password' and username = '$username';";
$stmt = $conn->prepare($query);

$stmt->bind_result($sPlayerName);
$stmt->execute();
$stmt->store_result();

$jsonarray = Array();
$stmt->fetch();
$item = array("username" => $sPlayerName);
array_push($jsonarray,$item);
$rows = $stmt->num_rows();

http_response_code(200);
$stmt->close();
$conn->close();

if ($rows == 0)
{ echo "LOGIN FAILED"; }
else
{ echo "LOGIN SUCCESS"; }

?>
