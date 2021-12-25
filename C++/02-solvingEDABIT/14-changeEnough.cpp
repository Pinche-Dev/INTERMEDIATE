#include <iostream>
#include <vector>

using namespace std;

bool changeEnough(std::vector<int> change, float amountDue) {
	float total = 0;
		total = change[0] *0.25+change[1]*0.10+change[2]*0.05+change[3]*0.01;
	return amountDue>=total?false:true;
}

int main()
{

}
