#include <iostream>
using namespace std;

int pos;
char C;
bool winner_declared = false;
bool occupied = false;
bool xTurn = true;
char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void drawBoard()
{
    cout << "-----------------" << endl;
    cout << "| " << arr[1] << " | " << arr[2] << " | " << arr[3] << " |" << endl;
    cout << "-----------------" << endl;
    cout << "| " << arr[4] << " | " << arr[5] << " | " << arr[6] << " |" << endl;
    cout << "-----------------" << endl;
    cout << "| " << arr[7] << " | " << arr[8] << " | " << arr[9] << " |" << endl;
    cout << "-----------------" << endl;
}
void check_occupied()
{
    if (arr[pos] == 'X')
    {
        occupied = true;
    }

    if (arr[pos] == 'O')
    {
        occupied = true;
    }

    cout<<"OCCUP"<<endl;
}
void checkWin()
{
    if (arr[1] == arr[2] && arr[2] == arr[3])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }
    else if (arr[4] == arr[5] && arr[5] == arr[6])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }

    else if (arr[7] == arr[8] && arr[8] == arr[9])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }

    else if (arr[1] == arr[4] && arr[4] == arr[7])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }
    else if (arr[2] == arr[5] && arr[5] == arr[8])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }
    else if (arr[3] == arr[6] && arr[6] == arr[9])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }

    else if (arr[1] == arr[5] && arr[5] == arr[9])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }

    else if (arr[3] == arr[5] && arr[5] == arr[7])
    {
        winner_declared = true;
        cout << "winner is " << C << endl;
    }
    else
    {
        return;
    }
}
void placeChar()
{
    if (xTurn)
    {
        occupied = false;
        cout << "X turn choose a place between 1-9: ";
        cin >> pos;
        check_occupied();
        C = 'X';
        if (!occupied)
        {
            arr[pos] = C;
            xTurn = false;
            drawBoard();
        }
        else
        {
            cout << pos << " already occupied its X turn again" << endl;
            placeChar();
        }
        checkWin();
    }
    else
    {
        occupied = false;
        cout << "O turn choose a place between 1-9 ";
        cin >> pos;
        check_occupied();
        C = 'O';
        if (!occupied)
        {
            arr[pos] = C;
            xTurn = true;
            drawBoard();
        }
        else
        {
            cout << pos << " already occupied its O turn again " << endl;
            placeChar();
        }
        checkWin();
    }
}

int main()
{
    drawBoard();
    while (!winner_declared)
    {
        placeChar();
    }
}