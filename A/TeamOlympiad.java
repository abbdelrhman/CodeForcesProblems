import java.util.ArrayList;
import java.util.Scanner;

public class TeamOlympiad {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int children ;
        ArrayList <Integer> prog = new ArrayList<>();
        ArrayList <Integer> math = new ArrayList<>();
        ArrayList <Integer> PE = new ArrayList<>();
        children=scanner.nextInt();
        int school[]=new int[children];
        for (int i=0  ;i<children;i++){
            school[i] = scanner.nextInt();
            if (school[i] == 1){
                prog.add(i+1);
            }else if (school[i] == 2){
                math.add(i+1);
            }else if (school[i]==3){
                PE.add(i+1);
            }
        }
        int G1 = prog.size();
        int G2 = math.size();
        int G3 = PE.size();
        int minimum1 = Integer.min(G1,G2);
        int noOfTeams = Integer.min(minimum1,G3);
        System.out.println(noOfTeams);
        for (int i=0 ; i<noOfTeams ; i++){
            System.out.print(prog.get(i) + " " + math.get(i) + " " + PE.get(i));
            System.out.println();
        }


    }
}
