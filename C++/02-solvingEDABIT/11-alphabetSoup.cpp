#include <iostream>
using namespace std;

std::string alphabetSoup(std::string str){

    char C ; 
    for (int i=0;i<str.length();i++){
        for (int j=0;j<str.length()-i-1;j++){
            if (str[j]>str[j+1]){
                C = str[j+1];
                str[j+1] = str[j];
                str[j] = C;
            }
        }
    }
    return str;
}

std::string alphabetSoup(std::string str){
    return std::sort(str.begin(),str.end());

}


int main()
{

}
