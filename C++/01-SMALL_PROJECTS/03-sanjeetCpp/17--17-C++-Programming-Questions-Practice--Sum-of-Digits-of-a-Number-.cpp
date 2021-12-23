// -17 C++ Programming Questions Practice : Sum of Digits of a Number
#include <iostream>
using namespace std;


int main(){
int num = 4567;
int sum , remain;
while (num>0){
remain = num% 10;
sum += remain;
num = num/10;
}
cout<<sum<<endl;
return 0;
}