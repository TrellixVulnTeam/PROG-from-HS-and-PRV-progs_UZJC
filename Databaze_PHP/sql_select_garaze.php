<?php
$servername = "dbs.spskladno.cz";
$username = "student14";
$password = "spsnet";
$dbname = "vyuka14";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if (!$conn) {
  die("Connection failed: " . mysqli_connect_error());
}

$sql = "SELECT * FROM Garaze";
$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
  // output data of each row
  while($row = mysqli_fetch_assoc($result)) {
    echo "ID: " . $row["id_garaz"]. " Název garáže: " . $row["nazev_garaz"]. " Město: " . $row["mesto"]. " Produktivita: " . $row["produktivita"]."<br>";
  }
} else {
  echo "0 results";
}

mysqli_close($conn);
?>
