#include <iostream>
#include <vector>

using namespace std;

std::vector<std::string> isFourLetters(std::vector<std::string> arr) {
	std::vector<std::string> v1;
	for (int i=0;i<arr.size();i++){
		if (arr[i].length()==4){
			v1.push_back(arr[i]);
		}
	}
	return v1;
}

int main()
{

}
