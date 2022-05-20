using System;

static void DrwBoard(String[] arr)
{
    Console.WriteLine("------------------");
    Console.WriteLine("| {0} | {1} | {2} |", arr[1], arr[2], arr[3]);
    Console.WriteLine("------------------");
    Console.WriteLine("| {0} | {1} | {2} |", arr[4], arr[5], arr[6]);
    Console.WriteLine("------------------");
    Console.WriteLine("| {0} | {1} | {2} |", arr[7], arr[8], arr[9]);
    Console.WriteLine("------------------");

}
static bool CheckWin(String[] arr)
{
    // int [,] s = { { 1, 2, 3 }, { 4, 5, 6 } };
    if (arr[1] == arr[2] && arr[2] == arr[3])
    {
        Console.WriteLine("Player " + arr[1] + " wins");
        return true;
    }
    else if (arr[4] == arr[5] && arr[5] == arr[6])
    {
        Console.WriteLine("Player " + arr[4] + " wins");
        return true;
    }
    else if (arr[7] == arr[8] && arr[8] == arr[9])
    {
        Console.WriteLine("Player " + arr[7] + " wins");
        return true;
    }else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        Console.WriteLine("Player " + arr[1] + " wins");
        return true;
    }else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        Console.WriteLine("Player " + arr[2] + " wins");
        return true;}
        else if (arr[3] == arr[6] && arr[6] == arr[9])
    {
        Console.WriteLine("Player " + arr[3] + " wins");
        return true;}
        else if (arr[1] == arr[5] && arr[5] == arr[9]){
        Console.WriteLine("Player " + arr[1] + " wins");
        return true;
        }
        else if (arr[3] == arr[5] && arr[5] == arr[7]){
        Console.WriteLine("Player " + arr[3] + " wins");
        return true;
        }
        else
        {
            return false;
        }
    return false;
}
static void placeMark(String[] arr, String player, int position)
{
    
    arr[position] = player;
}
static void Main()
{
    bool winnerDeclared = false;
    String[] arr = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    Console.WriteLine("Hello world");
    DrwBoard(arr);
    CheckWin(arr);
    bool Xturn = true;
    while (!winnerDeclared)
    {

        if (Xturn)
        {
            Console.Write("X turn Choose a position between 1-9: ");
            int pos = Convert.ToInt16(Console.ReadLine());
            placeMark(arr, "X", pos);
            Xturn = false;
            DrwBoard(arr);
            winnerDeclared = CheckWin(arr);
        }
        else
        {

            Console.Write("O turn Choose a position between 1-9: ");
            int pos = Convert.ToInt16(Console.ReadLine());
            placeMark(arr, "O", pos);
            Xturn = true;
            DrwBoard(arr);
            winnerDeclared = CheckWin(arr);
        }
    }
}

Main();