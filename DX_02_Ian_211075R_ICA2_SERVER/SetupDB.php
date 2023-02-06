<?php //SetupDB.php
//check if POST fields are received, else quit
// Connect database 
include("dbconninc.php");
// Prepare Statement...? denotes to link to php variables later
$query=["
CREATE TABLE tb_users (
    uid INT NOT NULL AUTO_INCREMENT,
    username VARCHAR(100) NOT NULL,
    password VARCHAR(32) NOT NULL,
    email VARCHAR(255) NOT NULL,
    PRIMARY KEY (uid));
","
CREATE TABLE tb_playerstats (
        Username VARCHAR(100) NOT NULL,
        Level INT,
        Prestige INT,
        XP INT,
        cash INT,
        timesPlayed INT);"
        ,"
CREATE TABLE tb_leaderboard (
            username varchar(100) NOT NULL,
            score int NOT NULL,
            recordDate date NOT NULL,
            finishTime float NOT NULL
);
"];
foreach($query as $a){

if(mysqli_query($conn,$a)){
    echo "Table created<br>";
}else{
    echo "Broken".mysqli_error($conn);
}
}

$conn->close(); // Close connection

?>
