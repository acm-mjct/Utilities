/******************************************************************************

addition of two numbers

*******************************************************************************/
import java.util.*;

public class Main
{
  public static void main (String[]args)
  {
    Scanner sc = new Scanner (System.in);	//System.in is a standard input stream  
      System.out.print ("Enter first number- ");
    int a = sc.nextInt ();
      System.out.print ("Enter second number- ");
    int b = sc.nextInt ();
    
    Main obj=new Main();
    int c = obj.add(a,b);
    
    System.out.println("answer is: "+c);  
  }
  
  
  public int add(int a,int b)
  {
      return a+b;
  }
}
