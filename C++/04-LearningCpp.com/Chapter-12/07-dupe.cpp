#include <iostream>
using namespace std;
class Rectangle{
    private:
    double m_lenght{1.0};
    double m_width{4.5};
    public:
    Rectangle(double length,double width):m_lenght{length},m_width{width}{};
    Rectangle(double length):m_lenght{length}{};
    void print(){
        cout<<"Rectangle length: "<<m_lenght<<" width: "<<m_width<<'\n';
    }
};
int main()
{
    Rectangle r1{3.4,32.1};
    Rectangle r2{5.1};
    r1.print();
    r2.print();

}
