// import java.util.Scanner;

// public class experiment_1 {
//     public static void main(String[] args) {

//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number of elements: ");
//         int n = sc.nextInt();
//         int[] ar = new int[n];
//         System.out.print("Enter " + n + " integers:");
//         for(int i = 0; i < n; i++) {
//             ar[i] = sc.nextInt();
//         }
//         int sum = 0;
//         int max = ar[0];
//         int min = ar[0];
//         for(int i = 0; i < n; i++) {
//             sum = sum + ar[i];
//             if(ar[i] > max) {
//                 max = ar[i];
//             }if(ar[i] < min) {
//                 min = ar[i];
//             }
//         }
//         double average = (double)sum / n;

//         System.out.println("Sum = " + sum);
//         System.out.println("Average = " + average);
//         System.out.println("Maximum = " + max);
//         System.out.println("Minimum = " + min);
//     }
// }

import java.util.Scanner;

public class experiment_1 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Uppercase = " + str.toUpperCase());
        System.out.println("Lowercase = " + str.toLowerCase());
        int count = 0;
        for(int i = 0; i < str.length(); i++) {
            char ch = Character.toLowerCase(str.charAt(i));

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {
                count++;
            }
        }
        System.out.println("Number of vowels = " + count);
        String reverse = "";
        for(int i = str.length() - 1; i >= 0; i--) {
            reverse = reverse + str.charAt(i);
        }
        if(str.equalsIgnoreCase(reverse)) {
            System.out.println("It is a palindrome.");
        }
        else {
            System.out.println("It is not a palindrome.");
        }
    }
}