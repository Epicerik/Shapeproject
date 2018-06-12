<!DOCTYPE html>
<html>
  <head>
    <title>Cube Calculator</title>
  </head>
  <style>
  body{
  background-color: #51ea82;
  }
  </style>

  <body>

    <h1>Cube Calculator</h1>
    <p>Insert the appropriate values into the boxes below</p>

    <?php
       // define variables and set to empty values
       $sidelength = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $sidelength = test_input($_POST["sidelength"]);
         exec("/usr/lib/cgi-bin/student3/cube " . $sidelength, $output, $retc); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      sidelength: <input type="text" name="sidelength"><br>
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

