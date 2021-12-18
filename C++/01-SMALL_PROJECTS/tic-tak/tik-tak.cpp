// this is a simple c++ project in the terminal

#include <iostream>
#include <vector>
using namespace std;

char c1[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int i;
bool xTurn = false;
bool winnerDeclared = false;
void check_winner()
{

    if (c1[0] == c1[1] && c1[1] == c1[2])
    {
        cout << c1[0] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[3] == c1[4] && c1[4] == c1[5])
    {
        cout << c1[3] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[6] == c1[7] && c1[7] == c1[8])
    {
        cout << c1[6] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[1] == c1[3] && c1[3] == c1[6])
    {
        cout << c1[1] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[2] == c1[4] && c1[4] == c1[7])
    {
        cout << c1[0] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[2] == c1[5] && c1[5] == c1[8])
    {
        cout << c1[2] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[0] == c1[4] && c1[4] == c1[8])
    {
        cout << c1[0] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else if (c1[6] == c1[4] && c1[4] == c1[2])
    {
        cout << c1[6] << " is the winner" << endl;
        winnerDeclared = true;
    }
    else
    {
        return;
    }
}

void print_board()
{
    cout << "-------------" << endl;
    cout << "| " << c1[0] << " | " << c1[1] << " | " << c1[2] << " |" << endl;

    cout << "-------------" << endl;
    cout << "| " << c1[3] << " | " << c1[4] << " | " << c1[5] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << c1[6] << " | " << c1[7] << " | " << c1[8] << " |" << endl;
};

void turnX()
{

    cout << "X turn (enter (1-9)): ";
    cin >> i;
    cout << endl;

    if (c1[i-1] == 'X' || c1[i-1] == 'O')
    {
        cout << "c[" << i << "] already occupied with " << c1[i-1] << endl;
        cout << "again its your turn X" << endl;
        turnX();
    }
    else
    {
        c1[i - 1] = 'X';
    }
}
void turnO()
{

    cout << "O turn (enter (1-9)): ";
    cin >> i;
    cout << endl;

    if (c1[i] != 'X' || c1[i] != 'O')
    {
        c1[i - 1] = 'O';
    }
    else
    {
        cout << "c[" << i << "] already occupied with " << c1[i] << endl;
        cout << "again its your turn O" << endl;
        turnO();
    }
}

int main()
{

    // board
    while (!winnerDeclared)
    {
        print_board();
        if (xTurn)
        {
            turnX();
            check_winner();
            xTurn = false;
        }
        else
        {
            turnO();
            check_winner();
            xTurn = true;
        }
        if(winnerDeclared){
            print_board();
        }
    }

    return 0;
};
