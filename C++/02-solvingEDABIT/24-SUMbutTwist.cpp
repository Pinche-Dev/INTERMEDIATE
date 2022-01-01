#include <iostream>
using namespace std;

int justAnotherSumProblem(int a, int b) {
	return a<b?(b-a+1)*(a+b)/2:(a-b+1)*(a+b)/2;
}
int justAnotherSumProblem(int a, int b) {
	int sum = 0;
	for (int i = std::min(a, b); i <= std::max(a, b); ++i) {
		sum += i;
	}
	return sum;
}
int justAnotherSumProblem(int a, int b) {
	if(a > b)
	{
		a = a - b;
		b = a + b;
		a = b - a;
	}
	int s = a;
	do
	{
		s += ++a;
	}while(a != b);
	return s;
}

int justAnotherSumProblem(int a, int b) {
	int greater =0;
	int smaller = 0 ;
	if (a>b){
		greater = a;
		smaller = b;
	}else{
		greater = b;
		smaller =a;
	}
	int total=0;
	for (int i=smaller;i<greater+1;i++){
		total+=i;
	}
	return total;
}

int main()
{

}
