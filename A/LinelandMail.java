import java.util.Arrays;
import java.util.Scanner;

public class LinelandMail {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numberOfCities = input.nextInt();
        int cities[] = new int[numberOfCities];
        for (int i = 0; i < numberOfCities; i++) {
            cities[i] = input.nextInt();
        }
        int min[] = new int[numberOfCities];
        int max[] = new int[numberOfCities];
        Arrays.sort(cities); // n lg n  ------ n^2 -> time limit
        for (int i = 0; i < numberOfCities; i++) {
            if (i != 0 && i != numberOfCities - 1) {
                int min1 = Math.abs(cities[i] - cities[i - 1]);
                int min2 = Math.abs(cities[i] - cities[i + 1]);
                int max1 = Math.abs(cities[i] - cities[numberOfCities - 1]);
                int max2 = Math.abs(cities[i] - cities[0]);
                min[i] = Math.min(min1, min2);
                max[i] = Math.max(max1, max2);
            } else {
                if (i == 0) {
                    min[i] = Math.abs(cities[i] - cities[i + 1]);
                    max[i] = Math.abs(cities[i]-cities[numberOfCities-1]);
                }
                if(i==numberOfCities-1){
                    min[i] = Math.abs(cities[i]-cities[i-1]);
                    max[i] = Math.abs(cities[i]-cities[0]);
                }
            }
        }
        for (int i = 0; i < numberOfCities; i++) {
            System.out.println(min[i] + " " + max[i]);
        }
    }
}
