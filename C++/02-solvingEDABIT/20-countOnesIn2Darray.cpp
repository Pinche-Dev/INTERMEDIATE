#include <iostream>
#include <vector>
using namespace std;

int count_ones(std::vector<std::vector<int>> matrix)
{
    int count = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int count_ones(std::vector<std::vector<int>> matrix)
{

    int count = 0;
    for (auto x : matrix)
    {
        for (auto y : x)
        {
            if (y == 1)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
}
