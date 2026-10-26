// class BankAccount {
//     private String name;
//     private double balance;
//     public BankAccount(String name, double balance) {
//         this.name = name;

//         if (balance >= 0) {
//             this.balance = balance;
//         } else {
//             System.out.println("Invalid initial balance");
//             this.balance = 0;
//         }
//     }
//     public String getName() {
//         return name;
//     }
//     public void setName(String name) {
//         this.name = name;
//     }
//     public double getBalance() {
//         return balance;
//     }
//     public void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             System.out.println("Deposit successful");
//         } else {
//             System.out.println("Invalid deposit");
//         }
//     }
//     public void withdraw(double amount) {
//         if (amount <= 0) {
//             System.out.println("Invalid withdrawal");
//         } else if (amount > balance) {
//             System.out.println("Not enough balance");
//         } else {
//             balance -= amount;
//             System.out.println("Withdrawal successful");
//         }
//     }
// }
// public class Exp4 {
//     public static void main(String[] args) {
//         BankAccount b1 = new BankAccount("Siddharth Tiwari", 25000);

//         System.out.println("Name: " + b1.getName());
//         System.out.println("Balance: " + b1.getBalance());
//         b1.deposit(12000); 
//         b1.withdraw(40000); 

//         System.out.println("Final Balance: " + b1.getBalance());
//     }
// }

class Area {
    void calArea(double r) {
        double area = 3.14 * r * r;
        System.out.println("Area of Circle = " + area);
    }
    void calArea(double l, double b) {
        double area = l * b;
        System.out.println("Area of Rectangle = " + area);
    }
    void calArea(int s) {
        int area = s * s;
        System.out.println("Area of Square = " + area);
    }
}

public class Exp4 {
    public static void main(String[] args) {

        Area a = new Area();

        a.calArea(6.5); 
        a.calArea(10, 5.9); 
        a.calArea(4); 
    }
}
