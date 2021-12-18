#include <iostream>
using namespace std;

int i;
char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool winner_declared = false;
bool xTurn = false;
char X = 'X';
char O = 'O';

void draw_board()
{
    cout << "--------------" << endl;
    cout << "| " << arr[1] << " | " << arr[2] << " | " << arr[3] << " |" << endl;
    cout << "--------------" << endl;
    cout << "| " << arr[4] << " | " << arr[5] << " | " << arr[6] << " |" << endl;
    cout << "--------------" << endl;
    cout << "| " << arr[7] << " | " << arr[8] << " | " << arr[9] << " |" << endl;
    cout << "--------------" << endl;
}
void check_winner()
{
    if (arr[1] == arr[2] && arr[2] == arr[3])
    {
        cout << arr[1] << " is the winner" << endl;
        winner_declared = true;
    }
    else if (arr[4] == arr[5] && arr[5] == arr[6])
    {
        cout << arr[4] << " is the winner" << endl;
        winner_declared = true;
    }

    else if (arr[7] == arr[8] && arr[8] == arr[9])
    {
        cout << arr[7] << " is the winner" << endl;
        winner_declared = true;
    }
    else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        cout << arr[1] << " is the winner" << endl;
        winner_declared = true;
    }

    else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        cout << arr[2] << " is the winner" << endl;
        winner_declared = true;
    }

    else if (arr[3] == arr[6] && arr[6] == arr[9])
    {
        cout << arr[3] << " is the winner" << endl;
        winner_declared = true;
    }
    else if (arr[1] == arr[5] && arr[5] == arr[9])
    {
        cout << arr[1] << " is the winner" << endl;
        winner_declared = true;
    }
    else if (arr[3] == arr[5] && arr[5] == arr[7])
    {
        cout << arr[3] << " is the winner" << endl;
        winner_declared = true;
    }
    else
    {
        return;
    }
    if (winner_declared)
    {
        draw_board();
    }
}
char C;
void putChar()
{
    if (xTurn)
    {
        C = X;
        cout << "X turn choose a number between (1-9) :";
        cin >> i;
        cout << endl;
        xTurn = false;
    }
    else
    {
        C = O;
        cout << "O turn choose a number between (1-9) :";
        cin >> i;
        cout << endl;
        xTurn = true;
    }
    if (arr[i] == 'X')
    {
        cout << i << " is already taken choose a number from (1-9) " << endl;
        if (xTurn)
        {
            xTurn = false;
        }
        else
        {
            xTurn = true;
        }
        draw_board();
        putChar();
    }
    else if (arr[i] == 'O')
    {
        cout << i << " is already taken choose a number from (1-9) " << endl;
        if (xTurn)
        {
            xTurn = false;
        }
        else
        {
            xTurn = true;
        }
        draw_board();
        putChar();
    }
    if (arr[i] != 'X' || arr[i] != 'O')
    {
        arr[i] = C;
        draw_board();
        check_winner();
    }
    else
    {
        return;
    }

}
int main()
{
    draw_board();
    while (!winner_declared)
    {
        putChar();
    }

    return 0;
}