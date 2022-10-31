package Utilities.lib.java;
import java.util.*; 

public class abrar_multiplicationTable
{
   public static void main(String[] args) 
   {
    int i;
    try (Scanner sc = new Scanner(System.in)) {
      System.out.println("ente a number -");
      int n=sc.nextInt();
      for (i=1;i<=10;i++)
      {
          System.out.println(n+"*"+i+"="+n*i);
      }
    }
  }  
    
} 