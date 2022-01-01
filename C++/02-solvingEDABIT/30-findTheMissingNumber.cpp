#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNum(std::vector<int> arr) {
std::sort(arr.begin(),arr.end());
	int i=1;
	for (auto a:arr){
		if (i!=a){
			return i;
		}
		i++;
	}

}


int main()
{

}
