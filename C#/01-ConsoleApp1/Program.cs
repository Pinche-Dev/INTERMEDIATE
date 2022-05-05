// See https://aka.ms/new-console-template for more information
using System;

// static void PrintName(string name)
// {
//     Console.WriteLine("name: "+name);
// }
static void Main(string[] args)
{
    int a;
    int b;
    int c;
    a = 5;
    b = 12;
    c = 22;
    Console.WriteLine(a==b);
    Console.WriteLine(a+b+c);
 
    Console.WriteLine(b+c);

    bool x = true;
    if (x)
    {
        Console.WriteLine("Hello world");
    }
    for (int i = 0; i < a; i++)
    {
        Console.WriteLine(i);
    }
    PrintName("Prajal");

}
Main(args);
