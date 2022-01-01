#include <iostream>
using namespace std;

bool oneOddOneEven(int n) {
	return n%10%2!=n/10%2;
}

bool oneOddOneEven(int n) {
	int last = n%10;
	int first = n-last;
	
	if (first%2==0&&last%2!=0){
		return true;
	}
	if (last%2==0&&first%2!=0){
		return true;
	}
}


int main()
{
cout<<12%10<<endl;
}
