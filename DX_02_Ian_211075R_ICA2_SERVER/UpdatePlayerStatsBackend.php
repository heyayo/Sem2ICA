<?php //ReadScoreboard.php
// Connect database
include("dbconninc.php");
// Prepare Statement (SQL query)
if (!isset($_POST["username"]) || !isset($_POST["newxp"]) || !isset($_POST["newlevel"]) || !isset($_POST["newcash"])) die("nosted");

$username = $_POST["username"];
$newxp = $_POST["newxp"];
$newlevel = $_POST["newlevel"];
$newcash = $_POST["newcash"];

$query = "UPDATE tb_playerstats SET level = $newlevel, xp = $newxp, cash = $newcash WHERE username = '$username'";
$stmt = $conn->prepare($query);
$stmt->execute();

echo $stmt->affected_rows;
echo "UPDATED";

http_response_code(200);
$stmt->close();
$conn->close();

?>

