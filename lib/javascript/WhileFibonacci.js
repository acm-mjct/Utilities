var a=0; // first term
var b=1;// second term
console.log(a);
console.log(b);
var n=prompt("Enter the number of terms")
var i=3;
while(i<=n)
{
    var c=a+b;// c = third term
    console.log(c);
    a=b;
    b=c;
    i++;
}
