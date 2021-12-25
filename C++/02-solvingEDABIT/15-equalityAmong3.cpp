#include <iostream>
using namespace std;
int equal(int a, int b, int c) {
	if (a==b==c){
		return 3;
	}else if (a==b&&b!==c){
		return 2;
	}else if (a==c&&b!=c){
		return 2;
	}else if(a!=b&&b!=c){
		return 0;
	}
}

int equal(int a, int b, int c) {
	if (a == b && b == c) return 3;
	else if (a == b || b == c || a == c) return 2;
	else return 0;
}


int main()
{

}
