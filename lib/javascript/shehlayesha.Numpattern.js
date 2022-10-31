
var i,j;
var char="";
var rows=prompt ("Enter the number of rows");
for(i=1;i<=rows;++i)
{
    for(j=1;j<=i;++j)
    {
        
        char=char+j;
    }
    char=char+"\n";
}
console.log(char);
