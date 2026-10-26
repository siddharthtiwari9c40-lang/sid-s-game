// import java.util.Scanner;

// public class experiment_2 {
//     public static void main(String[] args) {

//         Scanner sc = new Scanner(System.in);

//         System.out.println("Checking whether the number is even or odd");
//         System.out.print("Enter a number: ");

//         int num = sc.nextInt();

//         if(num % 2 == 0) {
//             System.out.println("Even number");
//         }
//         else {
//             System.out.println("Odd number");
//         }

//         System.out.println("Calculating the student Grade based on marks");
//         System.out.print("Enter student marks: ");

//         int marks = sc.nextInt();

//         if(marks >= 90) {
//             System.out.println("Grade A");
//         }
//         else if(marks >= 80) {
//             System.out.println("Grade B");
//         }
//         else if(marks >= 70) {
//             System.out.println("Grade C");
//         }
//         else if(marks >= 60) {
//             System.out.println("Grade D");
//         }
//         else {
//             System.out.println("Grade F");
//         }
//     }
// }

import java.util.Scanner;

public class experiment_2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Sum of digits of a number");
        System.out.print("Enter a number: ");

        int num = sc.nextInt();
        int sum = 0;

        while(num > 0) {
            sum = sum + num % 10;
            num = num / 10;
        }

        System.out.println("Sum of digits = " + sum);

        System.out.println("Making the pattern using do while and while loop");
        System.out.print("Enter number of rows: ");

        int n = sc.nextInt();
        int i = 1;

        do {
            int j = 1;

            while(j <= i) {
                System.out.print("* ");
                j++;
            }

            System.out.println();
            i++;

        } while(i <= n);
    }
}