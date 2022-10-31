import java.util.*;


public class Main
{

  public static void main (String args[])
  {
    Scanner sc = new Scanner (System.in);	//System.in is a standard input stream  
      System.out.print ("Enter first number- ");
    int number = sc.nextInt ();
    int i, fact = 1;

    for (i = 1; i <= number; i++)
      {
	fact = fact * i;
      }
    System.out.println ("Factorial of " + number + " is: " + fact);
  }
}
