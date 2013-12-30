<?php
include('simple_html_dom.php');
$url='http://icpc.baylor.edu/regionals/finder/asia-amritapuri-first-round-2013/standings';
$html=file_get_html('url');
$tds=find('td');
$td1=find('td',0);
count=0;
foreach($tds as $td)
{
    if($tds!=$td1)
    {
        count++;$td1=$tds;
    }

}
?>
