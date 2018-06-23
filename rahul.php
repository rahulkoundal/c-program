<?php
$j=1;
//echo "rahul please enter the number ==";
//$a=fgets(STDIN);

for($i=1;$i<=$20;$i++)
{
	$fact=0;
	while($j<=$i)
	{
		if($i%$j==0)
		{ $fact++;
		}
	}

	if($fact==2)
	{
		echo $i;
	}
}
?>
