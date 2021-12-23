#include <iostream>
using namespace std;

int i;
char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool winner_declared = false;
char X = 'X';
char O = 'O';
bool xTurn = false;

void draw_board()
{
    cout << "------------" << endl;
    cout << "| " << arr[1] << " | " << arr[2] << " | " << arr[3] << " | " << endl;
    cout << "------------" << endl;
    cout << "| " << arr[4] << " | " << arr[5] << " | " << arr[6] << " | " << endl;
    cout << "------------" << endl;
    cout << "| " << arr[7] << " | " << arr[8] << " | " << arr[9] << " | " << endl;
}
void check_winner()
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
        cout << arr[1] << " is the winner" << endl;
    }
    else
    {
        return;
    }
    // else if (arr[1] == arr[2] && arr[2] == arr[3])
    // {
    // winner_declared = true;
    // cout << arr[1] << " is the winner" << endl;
    // }
}

char C;
void placeChar()
{
    if (xTurn)
    {
        C = X;
        cout << "X turn (choose a place between (1-9))";
        cin >> i;
        cout << endl;

        xTurn = false;
    }
    else
    {
        C = O;
        cout << "O turn (choose a place between (1-9)): ";
        cin >> i;
        cout << endl;

        xTurn = true;
    }
    if (arr[i] == 'X' || arr[i] == 'O')
    {
        draw_board();
        if (xTurn)
        {
            xTurn = false;
        }
        else
        {
            xTurn = true;
        }
        cout << arr[i] << "already occupied " << C << " turn again" << endl;
        placeChar();
    }
    else
    {

        arr[i] = C;
        check_winner();
        draw_board();
    }
}
int main()
{
    draw_board();
    while (!winner_declared)
    {
        placeChar();
        // for (int i = 0; i<size(arr);i++){
        //     cout<<arr[i]<<endl;
        // }
    }

    return 0;
}