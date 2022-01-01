#include <iostream>
using namespace std;

std::string makeTitle(std::string s) {
	s[0] = toupper(s[0]);
	for (int i=0;i<s.length();i++){
		if (s[i]==' '){
			s[i+1] = toupper(s[i+1]);
		}
	}
	return s;
}

int main()
{

}
