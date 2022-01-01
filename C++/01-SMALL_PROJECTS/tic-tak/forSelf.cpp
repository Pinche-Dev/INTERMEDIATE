#include <iostream>
using namespace std;

bool winner_declared;
bool Xturn;
int pos;
bool posOccupied;
char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void printBoard()
{
    cout << "----------------" << endl;
    cout << "| " << arr[1] << " | " << arr[2] << " | " << arr[3] << " |" << endl;
    cout << "----------------" << endl;
    cout << "| " << arr[4] << " | " << arr[5] << " | " << arr[6] << " |" << endl;
    cout << "----------------" << endl;
    cout << "| " << arr[7] << " | " << arr[8] << " | " << arr[9] << " |" << endl;
    cout << "----------------" << endl;
};
void CheckWin()
{
    if (arr[1] == arr[2] && arr[2] == arr[3])
    {
        winner_declared = true;
        cout << arr[1] << " is the winner" << endl;
    }

    else if (arr[4] == arr[5] && arr[5] == arr[6])
    {
        winner_declared = true;
        cout << arr[4] << " is the winner" << endl;
    }
    else if (arr[7] == arr[8] && arr[8] == arr[9])
    {
        winner_declared = true;
        cout << arr[7] << " is the winner" << endl;
    }
    else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        winner_declared = true;
        cout << arr[1] << " is the winner" << endl;
    }
    else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        winner_declared = true;
        cout << arr[2] << " is the winner" << endl;
    }
    else if (arr[3] == arr[6] && arr[6] == arr[9])
    {
        winner_declared = true;
        cout << arr[3] << " is the winner" << endl;
    }
    else if (arr[1] == arr[5] && arr[5] == arr[9])
    {
        winner_declared = true;
        cout << arr[1] << " is the winner" << endl;
    }
    else if (arr[3] == arr[5] && arr[5] == arr[7])
    {
        winner_declared = true;
        cout << arr[3] << " is the winner" << endl;
    }
    else
    {
        return;
    }
}
void CheckOccupied()
{
    if (arr[pos] == 'X' || arr[pos] == 'O')
    {
        posOccupied = true;
    }
    else
    {
        posOccupied = false;
    }
}
void placeChar()
{
    if (Xturn)
    {
        cout << "its X turn choose a position between 1-9: ";
        cin >> pos;
        CheckOccupied();
        if (!posOccupied)
        {
            arr[pos] = 'X';
            CheckWin();
        }
        else
        {
            cout << pos << " already occupied choose a position between 1-9: ";
            printBoard();
            placeChar();
        }
        if (!winner_declared)
        {

            printBoard();
        }
        Xturn = false;
    }
    else
    {
        cout << "its O turn choose a position between 1-9: ";
        cin >> pos;
        CheckOccupied();
        if (!posOccupied)
        {
            arr[pos] = 'O';
            CheckWin();
        }
        else
        {
            cout << pos << " already occupied choose a position between 1-9 ";
            printBoard();
            placeChar();
        }
        Xturn = true;
        if (!winner_declared)
        {
            printBoard();
        }
    }
}
int main()
{
    printBoard();
    while (!winner_declared)
    {
        placeChar();
    }
    printBoard();
}
