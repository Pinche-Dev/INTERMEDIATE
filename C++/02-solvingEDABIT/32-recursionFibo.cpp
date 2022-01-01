#include <iostream>
using namespace std;
int fibo(int num){
	if (num==0){
		return 0;
	}else if(num<=2){
		return 1;
	}else{
		return fibo(num-2)+fibo(num-1);
	}
}
int fib(int n) {
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2);
}

int main()
{
cout<<fibo(8)<<endl;
}
