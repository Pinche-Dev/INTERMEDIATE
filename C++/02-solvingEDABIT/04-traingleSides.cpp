#include <iostream>
using namespace std;

int triangle(int n)
{
    int increment = 2;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            return 1;
        }
        else if (i == 1)
        {
            total++;
        }
        else
        {
            total += increment;
            increment++;
        }
    }
    return total;

}

int main(){
    cout<<triangle(4)<<endl;
}


// OTHER PEOPLE

int triangle(int n)
{
	return n * (n + 1) / 2;
}

int triangle(int n) {
	if(n==1)return n;
	return n+triangle(n-1);
}


