#include <iostream>
using namespace std;

class Vector2
{

private:
    float X;
    float Y;

public:
    Vector2(float x, float y) : X(x), Y(y){

    }
    Vector2 operator+(Vector2 &other)
    {
        return Vector2(X + other.X, Y + other.Y);
    };
    void Print()const{
        cout<<X<<", "<<Y<<'\n';
    }
};

int main()
{

    Vector2 v1(1, 2);
    Vector2 v2(4,5);
    Vector2 v3 = v1+v2;
    v1.Print();
    v3.Print();
}