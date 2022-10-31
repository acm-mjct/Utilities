package com.tcc.java.programs;
 
import java.util.*;
 
public class OddNumberSum {
    public static void main(String args[]) {
        int N, i, sum = 0;
 
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number");
        N = in.nextInt();
 
        for(i = 0; i <= N; i++){
            if((i%2) == 1){
                sum += i;
            }
        }
     
        System.out.print("Sum of all odd numbers between 0 to "
            + N + " = " + sum);
    }
}
