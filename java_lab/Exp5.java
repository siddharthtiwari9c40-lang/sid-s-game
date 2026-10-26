// 
class Animal {
    void sound() {
        System.out.println("Animal are also a living beings");
    }
}
class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("The dog barks");
    }
}
class Cat extends Animal {
    @Override
    void sound() {
        System.out.println("The cat meow");
    }
}
public class Exp5 {
    public static void main(String[] args) {
        Animal[] animals = { new Dog(), new Cat(), new Animal() };
        for (Animal a : animals) {
            a.sound();
        }
    }
}