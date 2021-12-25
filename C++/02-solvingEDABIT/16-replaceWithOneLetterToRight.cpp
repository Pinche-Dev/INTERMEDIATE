#include <iostream>
using namespace std;

std::string move(std::string word) {
	int num = 0;
	for (int i=0;i<word.length();i++){
		num = int(word[i])+1;
		word[i] = char(num);
	}
	return word;
}


std::string move(std::string word) {
	for(char &c : word)
	{
		c += 1;
	}
	return word;
}


int main()
{

}
