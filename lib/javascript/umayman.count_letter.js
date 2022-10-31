var str= prompt("Enter a sentence to count the number of A's")
function char_count(str,A){
    var count=0;
    for(var i=0;i<str.length;i++)
    {
        if(str[i]!=A)
        {
            continue;
        }
        count++;
    }
    return count;
}
console.log(char_count(str,'A'));
