#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isVowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int countVowels(std::string str)
{
    return count_if(str.begin(), str.end(), isVowel);
}




// int countVowels(std::string str) {
	// int counter=0;
//   counter += count(str.begin(), str.end(), 'a');
//   counter += count(str.begin(), str.end(), 'e');
//   counter += count(str.begin(), str.end(), 'i');
//   counter += count(str.begin(), str.end(), 'o');
//   counter += count(str.begin(), str.end(), 'u');
//   std::cout << counter;
// }




// int countVowels(std::string str)
// {
// int count = 0;
// vector<char> vowels = { 'a','e','i','o','u','A','E','I','O','U' };
//
// for (auto a:str){
// for (auto c:vowels){
// if (c==a){
// count+=1;
// }
// }
// }
// return count;
// }

int main()
{
    cout << countVowels("Celebration") << endl;
}
