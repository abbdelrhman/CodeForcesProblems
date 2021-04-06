import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Scanner;

public class Pangram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        String s = scanner.nextLine();

        HashSet<Character> input = new LinkedHashSet<>();
        for (int i = 0; i < n; i++) {
            if (Character.isUpperCase(s.charAt(i))) {
                input.add(Character.toLowerCase(s.charAt(i)));
            }else{
                input.add(s.charAt(i));
            }
        }
        if (input.size() == 26) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
