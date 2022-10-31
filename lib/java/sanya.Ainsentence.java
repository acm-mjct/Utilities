import java.util.Scanner;
 
public class StringOperator
{
   public static int countWordsinStr(String str){
        int count = 1;
        for(int i=0; i<=str.length()-1; i++){
            if(str.charAt(i) == ' ' && str.charAt(i+1)!=' '){
                count++;
            }
        }
        return count;
    }
   public static void main(String args[]){
        String str;
        Scanner scan = new Scanner(System.in);
 
        System.out.print("Enter a Sentence : ");
        str = scan.nextLine();
 
        System.out.print("Total number of words are " + countWordsinStr(str));
   }
}
 