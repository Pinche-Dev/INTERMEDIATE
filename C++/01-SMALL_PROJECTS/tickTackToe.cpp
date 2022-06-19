#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<char> board);
bool checkWin(vector<char> board);
bool placeMark(vector<char> &board, int pos, char Mark);

int main()
{
    vector<char> board = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool isXturn = true;
    bool isWinnerDeclared = false;
    printBoard(board);

    while(!isWinnerDeclared){
        if (isXturn){
            again:
            int pos;
            cout<<"X turn choose a number between 1-9: ";
            cin>>pos;
            if (placeMark(board,pos,'X')==false){
                goto again;
            }
            isWinnerDeclared = checkWin(board);
            isXturn = false;
            printBoard(board);
        }else{
            more:
            int pos;
            cout<<"O turn choose a number between 1-9: ";
            cin>>pos;
            if (placeMark(board,pos,'O')==false){
                goto more;
            }
            isWinnerDeclared = checkWin(board);
            isXturn = true;
            printBoard(board);
        }

    }

    return 0;
}
void printBoard(vector<char> board)
{
    cout << "| " << board[1] << " | " << board[2] << " | " << board[3] << " |" << '\n';
    cout << "-------------\n";
    cout << "| " << board[4] << " | " << board[5] << " | " << board[6] << " |" << '\n';
    cout << "-------------\n";
    cout << "| " << board[7] << " | " << board[8] << " | " << board[9] << " |" << '\n';
    cout << "-------------\n";
}
bool checkWin(vector<char> board)
{
    vector<vector<int>> winRules = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, {1, 5, 9}, {3, 5, 7}};

    for (int i = 0; i < 8; i++)
    {
        if (board[winRules[i][0]] == board[winRules[i][1]] & board[winRules[i][1]] == board[winRules[i][2]])
        {
            cout << "winner " << board[winRules[i][0]] << '\n';
            return true;
        }
    }
    return false;
}
bool placeMark(vector<char> &board, int pos, char Mark)
{
    if (board[pos] != 'X' && board[pos] != 'O')
    {
        board[pos] = Mark;
        return true;
    }
    else
    {
        cout << Mark << " turn again\n";
        return false;
    }
}