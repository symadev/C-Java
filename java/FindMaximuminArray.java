import java.util.Scanner;

public class FindMaximuminArray{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        // Input
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int max = arr[0];

        // Find max
        for (int i = 1; i < n; i++) {
            if (arr[i] > max)
                max = arr[i];
        }

        System.out.println(max);
    }
}