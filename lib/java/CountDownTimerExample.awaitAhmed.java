import java.util.Timer;
import java.util.TimerTask;
//sample class
public class CountDownTimerExample {
//declare timer t
Timer t;
//constructor of the class
public CountDownTimerExample(int seconds) {
t = new Timer();
//schedule the timer
t.schedule(new rt(), seconds*1000);
}
//sub class that extends TimerTask
class rt extends TimerTask {
//task to perform on executing the program
public void run() {
System.out.println("Seconds you have input is over..!!! ");
t.cancel(); //stop the thread of timer
}
}
//main method
public static void main(String args[]) {
//pass 5 seconds as timer
new CountDownTimerExample(5);
System.out.println("Count down starts now!!! ");
}
}
