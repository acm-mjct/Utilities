import java.io.*;
import java.util.*;
public class Solution {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println(A.length()+B.length());
       int compare = A.compareTo(B);  
if (compare < 0) {  
    System.out.println("No");
}
else if(compare>0) {
    System.out.println("Yes");
}
else{
    System.out.println("No");
}
String C = A.substring(0, 1).toUpperCase() + A.substring(1);
String D = B.substring(0, 1).toUpperCase() + B.substring(1);
System.out.println(C+" "+D);
    }
}
