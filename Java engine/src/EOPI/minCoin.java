package EOPI;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;


public class minCoin {

    public static void main(String[] args) {
        List<Integer> arr = Arrays.asList(1, 2, 2, 4, 12, 15);
        int out = smallestNonConstructableValue(arr);
        System.out.println(out);
    }

    public static int smallestNonConstructableValue(List<Integer> arr) {
        Collections.sort(arr);
        int maxNonConstructableValue = 0;
        for (int i : arr) {
            if (i > maxNonConstructableValue + 1) {
                break;
            }
            maxNonConstructableValue += i;
        }
        return maxNonConstructableValue + 1;
    }
}
