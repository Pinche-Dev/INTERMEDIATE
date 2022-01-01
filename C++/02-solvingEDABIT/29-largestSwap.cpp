#include <iostream>
using namespace std;


bool largestSwap(int num) {
    int last = num%10;
    int first = num - last;
    int oneDigitFirst = first/10;

    if (oneDigitFirst>last){
        return true;
    }else{
        return false;
    }
}


bool largestSwap(int num) {
	return ((num / 10) >= (num % 10));
}


int main()
{

    cout<<largestSwap(22)<<endl;
}
