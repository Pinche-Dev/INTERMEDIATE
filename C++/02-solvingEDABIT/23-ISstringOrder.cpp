#include <iostream>
using namespace std;


bool isInOrder(std::string str) {
	for (int i=0;i<str.length()-1;i++){
		if (str[i]>str[i+1]){
			return false;
		}
	}
	return true;
}

bool isInOrder(std::string str)
{
  return std::is_sorted(str.begin(), str.end());
}

bool isInOrder(std::string str) {
	std::string a = str;
	sort(a.begin(),a.end());
	return a == str;
}




int main()
{

}
