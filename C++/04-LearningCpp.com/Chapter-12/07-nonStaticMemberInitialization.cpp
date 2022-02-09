#include <iostream>
using namespace std;
class Rectangle
{
private:
    double m_length{1.0};
    double m_width{1.0};

public:
    Rectangle(double length, double width) :m_length{length},m_width{width}{};
    Rectangle(double length):m_length{length}{};
    void print(){
        cout<<"Rectangle length: "<<m_length<<" Width: "<<m_width<<'\n';
    }
};
int main()
{
    Rectangle r1{4.0,5.0};
    r1.print();
    Rectangle r2{4.2};
    r2.print();
}
