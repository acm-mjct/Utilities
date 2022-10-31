import java.util.*;public class Main{      
      public static int sum(int num1, int num2){      
          int ans = num1 + num2;        return ans;    }  
                public static void main(String[] args){    
                        Scanner sc = new Scanner(System.in);  
                                      System.out.println("Enter the first number: "); 
                                             int n1 = sc.nextInt();  
                                                           System.out.println("Enter the second number: ");        int n2 = sc.nextInt();                int sum = sum(n1,n2);                System.out.println("The sum of "+n1+" and "+n2+" is "+sum);            }        }
Output