using System;

public class Dog
{
    String Name;
    int age;
    String breed;
    String color;


    public Dog(String Name,int age,String breed,String color)
    {
        this.Name = Name;
        this.age = age;
        this.breed = breed;
        this.color = color;

    }
    public String getName()
    {
        return Name;
    }
    public int getAge() { return age; }
    public String getBreed() { return breed; }
    public String getColor() { return color; }

    public static void Main(String[] args)
    {
        Dog N = new Dog("Netty", 1, "German Shepard", "black");
        int age=N.getAge();
        Console.Write("age"+age);

    }
}