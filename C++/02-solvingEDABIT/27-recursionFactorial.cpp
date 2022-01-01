#include <iostream>
using namespace std;



int factorial(int num) {
	if (num==1){
		return num;
	}else{
		return num*factorial(num-1);
	}
}

int factorial(int num) {
	return num == 0 ? 1 : num * factorial(num - 1);
}

int factorial(int num) {
	if (!num)
		return 1;
	return num * factorial(--num);
}


int main()
{

}
