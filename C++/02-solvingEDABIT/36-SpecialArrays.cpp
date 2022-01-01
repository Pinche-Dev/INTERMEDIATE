#include <iostream>
#include <vector>
using namespace std;

bool isSpecialArray(std::vector<int> arr) {
	for(int i = 0; i < arr.size(); i++){
		if(i % 2 != arr[i] % 2)
			return false;
	}
	return true;
}

bool isSpecialArray(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 != 0)
            {
               return false;
            }
        }
        else
        {
            if (arr[i] % 2 == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
}
