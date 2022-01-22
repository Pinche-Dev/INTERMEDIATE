#include <iostream>
using namespace std;
std::string lettersOnly(std::string str)
{
    std::string res;

    for (auto c : str)
    {
        if (std::isalpha(c))
        {
            res += c;
        }
    }

    return res;
}
std::string lettersOnly(std::string str)
{
    std::string res = "";
    for (char c : str)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            res += c;
    }
    return res;
}

int main()
{
    cout << int('a') << endl;
    cout << int('z') << endl;
    cout << int('Z') << endl;
    cout << int('A') << endl;
    cout << char(91) << endl;
    std::string lettersOnly(std::string str)
    {
        std::string ret = "";
        for (auto a : str)
        {
            if (a >= 65 && a <= 90)
            {
                ret += a;
            }
            else if (a <= 122 && a >= 97)
            {
                ret += a;
            }
        }
        return ret;
    }

}
bool isAlpha(char c)
    {
        bool lower = 97 <= (int)c and (int) c <= 122;
        bool upper = 65 <= (int)c and (int) c <= 90;
        return lower or upper;
    }

    std::string lettersOnly(std::string str)
    {
        std::string result = "";
        for (auto c : str)
        {
            if (isAlpha(c))
            {
                result += c;
            }
        }
        return result;
    }