#include <iostream>
#include <vector>
using namespace std;
std::vector<int> noOdds(std::vector<int> arr) {
    for (auto i=arr.begin();i!=arr.end();i++){
        if (*i%2!=0){
            arr.erase(i);
					i--;
        }
    }
return arr;
}

std::vector<int> noOdds(std::vector<int> arr) {
  std::vector<int> evens;
	for(int i : arr){
    if(i % 2 == 0) evens.push_back(i);
  }
  
  return evens;
}

std::vector<int> noOdds(std::vector<int> arr) {
  auto it = remove_if(arr.begin(),arr.end(),[](int i){return i%2;});
  arr.erase(it,arr.end());
  return arr;
}

std::vector<int> noOdds(std::vector<int> arr) {
	arr.erase(std::remove_if(arr.begin(),arr.end(),[](int x){return x % 2 == 1;}),arr.end());
	return arr;
}




int main()
{
	
}
