#include <iostream>
using namespace std;


std::vector<int> countPosSumNeg(std::vector<int> arr) {
	if (arr.size()==0){
		return arr;
	}
	int positive=0;
	int negative = 0;
	for (int i=0;i<arr.size();i++){
		if (arr[i]<0){
			negative+=arr[i];
		}else{
			positive++;
		}
	}
	std::vector<int> v1{positive,negative};
	return v1;
}


int main()
{

}
