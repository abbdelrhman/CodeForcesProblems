import java.util.ArrayList;
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        input=input.toLowerCase();
        ArrayList<Character> ans = new ArrayList<>();
        for (int i=0 ; i< input.length() ; i++){
            if(input.charAt(i) == 'a' ||input.charAt(i) == 'e' ||input.charAt(i) == 'y' ||
                    input.charAt(i) == 'o' ||input.charAt(i) == 'u' ||input.charAt(i) == 'i' ){

            }else{
                ans.add('.');
                ans.add(input.charAt(i));
            }
        }
        for (int i=0 ; i<ans.size();i++){
            System.out.print(ans.get(i));
        }
    }
}
