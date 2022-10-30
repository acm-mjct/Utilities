import java.util.*;
class FactorialExample
{
    public static void main (String argr[])
    {
        int i=1, n=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        int num =sc.nextInt();
        while(i<=num)
        {
            fact=fact*i;
            i++; 
        }
      System.out.println("factorial of a number:"+fact);  
    }
}