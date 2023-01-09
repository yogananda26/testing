package package2;
import java.util.*; 

class something{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int h = Integer.parseInt(s.substring(0,2));
        int m = Integer.parseInt(s.substring(3,5));

        double hour = (0.5 * (h * 60 + m));
        double minute = (6 * m);
        double angle = Math.abs(hour - minute);

        angle = Math.min(360 - angle, angle);

        System.out.println(Math.abs(angle));
    }
}
