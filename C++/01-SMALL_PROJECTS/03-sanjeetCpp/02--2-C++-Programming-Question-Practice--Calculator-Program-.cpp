// -2 C++ Programming Question Practice : Calculator Program

// int add(int, int );
// int add(int, int , int );
// int sub(int, int );
// int mult(int,int );
// int mult(intint, int);
// double divide(int , int )

int add(int n1, int n2)
{
    return n1 + n2;
};
int add(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
};
int sub(int n1, int n2)
{
    return n1 - n2;
};
int mult(int n1, int n2)
{
    return n1 * n2;
};
int mult(int n1, int n2, int n3)
{
    return n1 * n2 * n3;
};
double divide(int n1, int n2)
{
    return n1 / n2;
}
#include <iostream>
    using namespace std;

int main()
{
    cout << add(4, 5) << endl;
cout<<add(5,6,7)<<endl;
cout<<mult(2,5)<<endl;
cout<<divide(45,5)<<endl;
    return 0;
}
