#include <iostream>
#include <memory>
#include <graphics.h>
using namespace std;

class Entity{
    public:
    Entity(){
        cout<<"Created Entity"<<endl;

    }
    ~Entity(){
        cout<<"Deleted Entity"<<endl;
    }
};
int main()
{
    unique_ptr<Entity>e1(new Entity);
    {
    unique_ptr<Entity> e2= make_unique<Entity>();

    }

    {
        weak_ptr<Entity> w1;
        {
            shared_ptr<Entity> s1 = make_shared<Entity>();
            w1 = s1;
        }


    }

}
