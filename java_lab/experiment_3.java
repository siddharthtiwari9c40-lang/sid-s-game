// class Student {

//     String name;
//     int rollno;
//     double marks;

//     Student() {
//         name = "Unknown";
//         rollno = 0;
//         marks = 0.0;
//     }

   
//     Student(String name, int rollno, double marks) {
//         this.name = name;
//         this.rollno = rollno;
//         this.marks = marks;
//     }

//     void displayDetails() {
//         System.out.println("Name: " + name);
//         System.out.println("Roll No: " + rollno);
//         System.out.println("Marks: " + marks);
//     }
// }

// public class experiment_3 {
//     public static void main(String[] args) {

//         Student s1 = new Student();
//         Student s2 = new Student("sid", 01, 95.5);
//         Student s3 = new Student("skylar", 02, 92.0);

//         System.out.println("Student 1 Details: (Default Constructor)");
//         s1.displayDetails();

//         System.out.println("Student 2 Details: (Parameterized Constructor)");
//         s2.displayDetails();

//         System.out.println("\nStudent 3 Details: (Parameterized Constructor)");
//         s3.displayDetails();
//     }
// }

class Student {

    String name;
    int rollno;
    double marks;
    static int count = 0;
    Student() {
        name = "Unknown";
        rollno = 0;
        marks = 0.0;
        count++;
    }
    Student(String name, int rollno, double marks) {
        this.name = name;
        this.rollno = rollno;
        this.marks = marks;
        count++;
    }
    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollno);
        System.out.println("Marks: " + marks);
    }
    static void displayCount() {
        System.out.println("Total objects created: " + count);
    }
}

public class experiment_3 {
    public static void main(String[] args) {

        Student s1 = new Student();
        Student s2 = new Student("sid", 01, 85.5);
        Student s3 = new Student("skylar", 02, 92.0);
        System.out.println("Student 1 Details:");
        s1.displayDetails();
        System.out.println("\nStudent 2 Details:");
        s2.displayDetails();
        System.out.println("\nStudent 3 Details:");
        s3.displayDetails();
        Student.displayCount();
    }
}