#include <iostream>
using namespace std;
std::string moodToday(std::string mood) {
	std::string s= "Today, I am feeling ";
    return s+mood;
}
int main()
{
    cout<<moodToday("Good")<<endl;

}
