<?php

$handle = fopen ("php://stdin", "r");
fscanf($handle, "%lf",$meal_cost);
fscanf($handle, "%i",$tip_percent);
fscanf($handle, "%i",$tax_percent);
$a = $meal_cost * ($tip_percent / 100);
$b = $meal_cost * ($tax_percent / 100);
$c = $a + $b + $meal_cost;
print "The total meal cost is " . round($c) ." dollars.";

?>
