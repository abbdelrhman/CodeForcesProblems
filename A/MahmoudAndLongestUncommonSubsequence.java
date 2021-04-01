import java.util.Scanner;

public class MahmoudAndLongestUncommonSubsequence {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string1 = scanner.nextLine();
        String string2 = scanner.nextLine();
        if (string1.equals(string2)) {
            System.out.println(-1);

        } else if (string1.length() > string2.length()) {
            System.out.println(string1.length());
        } else  {
            System.out.println(string2.length());
        }


    }
}
