// -14 C++ Programming Questions Practice : How to Check a Leap Year

#include <iostream>
using namespace std;

void isLeapYear(int year){
    if (year % 4==0 &&year %100 !=0 ||year %400 ==0){
        cout<<year<< " is a leap year"<<endl;
    }else{
        cout<<year <<" is not a leap year"<<endl;
    }
}

int main(){
    
    isLeapYear(450);
    isLeapYear(2012);
    isLeapYear(2013);
    isLeapYear(2014);
    isLeapYear(2015);

return 0;
}