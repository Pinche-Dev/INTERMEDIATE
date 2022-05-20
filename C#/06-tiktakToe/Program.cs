// See https://aka.ms/new-console-template for more information

using System;

namespace TikTakToe{
    class Game
    {
        static bool winnerDeclared = false;
        static bool xTurn = false;
        static String[] box = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
        public static void placeMark(int pos, string mark)
        {
            if (box[pos] != "X" && box[pos] != "O")
            {
                box[pos] = mark;
                xTurn = !xTurn;
            }
            else
            {
                Console.WriteLine("Its " + mark + " turn again " + pos + " already occupied.");
            }
        }
        public static void checkWinner()
        {
            int[,] winRules = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 1, 4, 7 }, { 2, 5, 8 }, { 3, 6, 9 }, { 1, 5, 9 }, { 3, 5, 7 } };

            for (int i = 0; i < 8; i++)
            {
                if (box[winRules[i, 0]] == box[winRules[i, 1]] && box[winRules[i, 1]] == box[winRules[i, 2]])
                {
                    winnerDeclared = true;
                    Console.WriteLine("Winner " + box[winRules[i, 0]]);
                    drawBoard();
                }
            }
        }

        public static void drawBoard()
        {
            Console.WriteLine("-------------");
            Console.WriteLine("| " + box[1] + " | " + box[2] + " | " + box[3] + " |");
            Console.WriteLine("-------------");
            Console.WriteLine("| " + box[4] + " | " + box[5] + " | " + box[6] + " |");
            Console.WriteLine("-------------");
            Console.WriteLine("| " + box[7] + " | " + box[8] + " | " + box[9] + " |");
            Console.WriteLine("-------------");
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            while (!winnerDeclared)
            {
                drawBoard();
                string mark = xTurn ? "X" : "O";
                Console.WriteLine(mark + " turn choose a number between 1-9: ");
                int pos = Convert.ToInt32(Console.ReadLine());
                placeMark(pos, mark);
                checkWinner();
            }
        }
    }
}
