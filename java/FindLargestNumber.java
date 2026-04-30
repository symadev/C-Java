import java.util.Scanner;

public class FindLargestNumber {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        // Compare values
        if (a > b)
            System.out.println(a);
        else
            System.out.println(b);
    }
}