// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");
static void Main(string[] args)
{
    Random random = new Random();
    int randomNumber = random.Next(101);
    int count = 0;
    Boolean guessed = false;
    Console.WriteLine("Enter a number between 0-100: ");
    while (!guessed)
    {
    int num = Convert.ToInt32(Console.ReadLine());

    if (num>randomNumber){
        Console.WriteLine("high!! guess a smaller number");

    }
    else if (num<randomNumber){
        Console.WriteLine("low!!! guess a high number");
    }else{
        Console.WriteLine("you have guessed the number in "+count+" tries and the number is "+ randomNumber);
    }

    }

}
Main(args);
