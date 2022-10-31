
let start = prompt("Enter the starting integer"); 
let end= prompt("Enter the ending integer");
let sum=0;
console.log (`The sum of odd numbers between  ${start} and ${end} = `);
for (i=start;i<=end;i++){
    if(start%2!=0){
        sum=sum+start;
    }
    start++
}
console.log (sum)
