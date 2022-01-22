#include <iostream>
using namespace std;
bool validatePIN(std::string pin)
{
    if (pin.length() == 4 || pin.length() == 6)
    {
        for (auto a : pin)
        {
            if (std::isdigit(a) != 1)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
}
