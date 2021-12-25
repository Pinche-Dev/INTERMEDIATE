#include <iostream>
using namespace std;
std::string maskify(std::string str) {
	if (str.length()<4){
		cout<<str<<endl;
		return str;
	}
	for (int i=0;i<str.length()-4;i++){
		str[i] = '#';
	}
	cout<<str<<endl;
	return str;
}
int main()
{
	maskify("456789");
	maskify("");
	maskify("12345");
	maskify("41234123412341234");

}
