#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;

bool XO(std::string str){
    int X;
    int O;
    for (auto a:str){
        if ('X'==toupper(a)){
            X++;
        } else if ('O'==toupper(a)){
            O++;
        }
    }
    if (X==O){
        return true;
    }else{
        return false;
    }
}

bool XO(std::string str)
{
    int x = 0;
    int X = 0;
    int o = 0;
    int O = 0;
    x = std::count(str.begin(), str.end(), 'x');
    o = std::count(str.begin(), str.end(), 'o');

    X = std::count(str.begin(), str.end(), 'X');
    O = std::count(str.begin(), str.end(), 'O');
    if (x+X == o+O)
    
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<XO("xxooo")<<endl;
}
