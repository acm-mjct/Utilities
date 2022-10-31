var a = 0; // first term
var b = 1; // second term
console.log(a);
console.log(b);
n = 10; //n = number of terms in series
for (var i = 3; i <= n; i++) {
  var c = a + b; // c = third term
  console.log(c);
  a = b;
  b = c;
}
