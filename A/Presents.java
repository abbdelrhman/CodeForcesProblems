import java.util.Scanner;

public class Presents {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt() ;
        int arr[] = new int[n];
        int ans[] = new int[n];
        for (int i=0 ; i<n ; i++){
            int j =scanner.nextInt();
            arr[i]=j;
            ans[j-1] = i+1 ;
        }
        for (int i=0 ; i<n ; i++){
            System.out.print(ans[i] + " ");
        }
    }
}
