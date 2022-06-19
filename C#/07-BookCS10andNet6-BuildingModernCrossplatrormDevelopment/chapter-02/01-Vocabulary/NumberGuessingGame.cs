using System;
static class NumeberGuessingGame{

    public static void run(){

    Random randomNumber = new Random();
    int randomN = randomNumber.Next(100);
    // Console.WriteLine(randomN);
        Console.WriteLine("Guess a number between 0-100");
        bool guessed = false;
        int guessCount = 0;
        int n;
        while(!guessed){
            guessCount++;
            n = Convert.ToInt32(Console.ReadLine());
            if (n<randomN){
                Console.WriteLine("Small, Guess higher number");
            }else if (n>randomN){
                Console.WriteLine("High, Guess smaller number");
            }else{
                Console.WriteLine("You have guessed the number in "+guessCount+" tries and the number is "+randomN);
            }

        }
    }

}