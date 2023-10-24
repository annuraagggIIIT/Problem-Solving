import java.util.Scanner;
public class reverseNumber {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for (int i = 0; i < n; i++) {
            int dig = n % 10;
            n = n / 10;
            System.out.print(dig);
        }
    }
}