import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ChangingColors {
    public int changingColors(int input1, int input2, int[][] input3) {
        return changingColors(input1, input2, input3, Arrays.asList(input1));
    }

    public int changingColors(int input1, int input2, int[][] input3, List<Integer> currentPath) {
        if (input1 == input2)
            return 0;

        int minSteps = Integer.MAX_VALUE;
        for (int i = 0; i < 10; i++) {
            if (input3[input1][i] == 1 && !currentPath.contains(i)) {
                currentPath = new ArrayList<>(currentPath);
                currentPath.add(i);
                minSteps = Math.min(minSteps, 1 + changingColors(i, input2, input3, currentPath));
            }
        }

        if (minSteps == Integer.MAX_VALUE)
            return -1;

        return minSteps;
    }

    public static void main(String[] args) {
        ChangingColors c = new ChangingColors();
        int[][] m = {
        { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }
        };
        System.out.println(c.changingColors(3, 7, m));

        int[][] m2 = {
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
        };
        System.out.println(c.changingColors(2, 3, m2));
    }
}
