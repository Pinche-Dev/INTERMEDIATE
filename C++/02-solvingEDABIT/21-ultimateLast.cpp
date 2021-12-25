
#include <iostream>
using namespace std;

// bool lastDig(int a, int b, int c) {
// 	return (a*b)%10==c%10;
// }

bool lastDig(int a, int b, int c) {
	int m = a*b;
	std::string x = std::to_string(m);
	std::string y = std::to_string(c);
	
	if (x[x.length()-1]==y[y.length()-1]){
		return true;
	}else{
		return false;
	}
}

int main()
{
cout<<to_string(45)<<endl;
cout<<4567%10<<endl;
}
