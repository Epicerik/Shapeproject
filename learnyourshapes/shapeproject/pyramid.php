<!DOCTYPE html>
<html>
  <head>
    <title>Pyramid Calculator</title>
  </head>
  <style>
  body{
  background-color: #51ea82;
  }
  </style>

  <body>

    <h1>Pyramid Calculator</h1>
    <p>Insert the appropriate values into the boxes below</p>

    <?php
       // define variables and set to empty values
       $height = $length = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $height = test_input($_POST["height"]);
         $length = test_input($_POST["length"]);
         exec("/usr/lib/cgi-bin/student3/pyrm " . $height . " " . $length, $output, $retc); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
$data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      height: <input type="text" name="height"><br>
      sidelength: <input type="text" name="length"><br>
      <input type="submit">
    </form>

    <?php
       
       echo "<h2>Your Answer:</h2>";
       foreach ($output as $line) {
echo $line;
         echo "<br>";
       }

      
     ?>

  <a href="shapes.html"><button>Go Home</button></a>
    
  </body>
</html>




