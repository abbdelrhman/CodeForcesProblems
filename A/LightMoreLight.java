import java.util.ArrayList;
import java.util.Scanner;

public class LightMoreLight {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long bulb = input.nextLong();
        while (bulb != 0) {
            int sq = (int) Math.sqrt(bulb);
            if (sq * sq == bulb) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
            bulb = input.nextLong();
        }
    }

}

