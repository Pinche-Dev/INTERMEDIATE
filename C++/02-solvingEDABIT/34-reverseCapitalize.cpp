#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

std::string reverseCapitalize(std::string str) {
    reverse(str.begin(),str.end());
    transform(str.begin(),str.end(),str.begin(),::toupper);
    return str;
}

std::string reverseCapitalize(std::string str) {
	std::string dizi;
	for(int i= str.size()-1; i>= 0; i--)
	{
		dizi.push_back(toupper(str.at(i)));
	}
	return dizi;
}



int main()
{
    cout<<reverseCapitalize("String")<<endl;


}
