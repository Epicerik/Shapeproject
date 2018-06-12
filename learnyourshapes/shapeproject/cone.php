<!DOCTYPE html>
<html>
  <head>
    <title>Cone Calculator</title>
  </head>
  <style>
  body{
  background-color: #51ea82;
  }
  </style>

  <body>

    <h1>Cone Calculator</h1>
    <p>Insert the appropriate values into the boxes below</p>

    <?php
       // define variables and set to empty values
       $radius = $vheight = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $radius = test_input($_POST["radius"]);
         $vheight = test_input($_POST["vheight"]);
         exec("/usr/lib/cgi-bin/student3/cone " . $radius . " " . $vheight, $output, $retc); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      radius: <input type="text" name="radius"><br>
      vertical height: <input type="text" name="vheight"><br>
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
