abstract class Shape
{
    abstract void area();
}

class Circle extends Shape
{
    double radius = 5;

    void area()
    {
        double result = 3.14 * radius * radius;
        System.out.println("Area of Circle = " + result);
    }
}

class Rectangle extends Shape
{
    double length = 10;
    double breadth = 5;

    void area()
    {
        double result = length * breadth;
        System.out.println("Area of Rectangle = " + result);
    }
}

public class Exp_6
{
    public static void main(String[] args)
    {
        Circle c = new Circle();
        Rectangle r = new Rectangle();

        c.area();
        r.area();
    }
}