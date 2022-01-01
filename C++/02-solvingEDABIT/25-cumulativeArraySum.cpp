#include <iostream>
using namespace std;

std::vector<int> cumulativeSum(std::vector<int> array) {
	std::vector<int> v1;
	int sum=0;
	for (int i=0;i<array.size();i++){
		sum+=array[i];
		v1[i]=sum;
	}
	return v1;
}

#include <numeric>
std::vector<int> cumulativeSum(std::vector<int> arr) {
  std::partial_sum(arr.begin(), arr.end(), arr.begin());
  return arr;
}

std::vector<int> cumulativeSum(std::vector<int> array) {
	uint32_t sum = 0;
  std::vector<int> ret;
  for (auto i : array) {
    ret.push_back(sum += i);
  }
  
  return ret;
}


int main()
{

}
