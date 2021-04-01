import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class CompareTheTriplets {

    static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
        int aliceTotalScore = 0;
        int bobTotalScore = 0;

        for (int i = 0; i < 3; i++) {
            int aliceScore = a.get(i);
            int bobScore = b.get(i);
            if (aliceScore != bobScore) {
                int temp = aliceScore > bobScore ? aliceTotalScore++ : bobTotalScore++;
            }

        }
        List<Integer> ans = new ArrayList<>();
        ans.add(aliceTotalScore);
        ans.add(bobTotalScore);
        return ans;
    }

}