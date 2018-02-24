/**
** Hello World Program
** Ahasanul Basher Hamza
** Date: 24/02/18
***/

<?php
$_fp = fopen("php://stdin", "r");

$inputString = fgets($_fp); // get a line of input from stdin and save it to our variable

// Your first line of output goes here
print("Hello, World.\n");
print("Welcome to 30 Days of Code!\n");
// Write the second line of output

fclose($_fp);
?>
