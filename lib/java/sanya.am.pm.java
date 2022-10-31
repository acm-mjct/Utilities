import java.util.Date;
import java.text.SimpleDateFormat;
public class D
emo {
   public static void main(String[] args) {
      System.out.println("The required packages have been imported");
      Date current_date = new Date();
      System.out.println("The current date is: " + current_date);
      SimpleDateFormat formatTime = new SimpleDateFormat("hh.mm aa");
      String result_time = formatTime.format(current_date);
      System.out.println("The current Time in AM/PM format is : " + result_time);
   }
}