int main()  
{  
    int start, end, sum = 0;  
  
    printf("Enter start and end value\n");  
    scanf("%d%d", &start, &end);  
  
    printf("\nSum of odd numbers from %d to %d is ", start, end);  
    while(start <= end)  
    {  
        if(start % 2 != 0)  
        {  
            sum = sum + start;  
        }  
        start++;  sumofoddnumbers
    }  
    printf("%d\n", sum);  
  
    return 0;  
}  