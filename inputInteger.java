import java.util.Scanner;

public class OddMultiples {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Prompt the user for an input integer
        System.out.print("Enter an integer: ");
        int input = scanner.nextInt();
        
        // Close the scanner to prevent resource leaks
        scanner.close();
        
        int count = 0; // Counter for odd multiples
        int i = 1;    // Start with the first positive integer
        
        System.out.println("The first 10 odd multiples of " + input + " are:");

        while (count < 10) {
            int multiple = input * i;
            
            if (multiple % 2 != 0) {
                System.out.println(multiple);
                count++;
            }
            
            i++;
        }
    }
}
