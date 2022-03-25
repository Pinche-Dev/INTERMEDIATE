#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool isMagic(vector<int> &m)
{
    const int magic = 15;
    int rsum = 0;
    for (int i = 0; i < m.size(); i++)
    {
        rsum += m[i];
        if (i % 3 != 2)
            continue;
        if (rsum != magic)
            return false;
        rsum = 0;
    }
    vector<int> csum = {0, 0, 0};
    for (int i = 0; i < m.size(); i++)
    {
        csum[i % 3] += m[i];
    }
    if (csum[0] != magic || csum[1] != magic || csum[2] != magic)
        return false;
    int lrsum = m[0] + m[4] + m[8];
    int rlsum = m[2] + m[4] + m[6];
    if (lrsum != magic || rlsum != magic)
        return false;

    return true;
}
int TransposeCost(vector<int> &m, vector<int> n)
{
    int total_cost = 0;
    for (int i = 0; i < m.size(); i++)
    {
        total_cost += abs(m[i] - n[i]);
    }
    return total_cost;
}
int formingMagicSquare(vector<vector<int>> s)
{
    int cost = INT16_MAX;
    vector<int> flatten;
    for (auto r : s)
    {
        for (auto c : r)
        {
            flatten.push_back(c);
        }
    }
    vector<int> p = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    while (next_permutation(p.begin(), p.end()))
    {
        if (!isMagic(p))
            continue;
        cost = min(TransposeCost(p, flatten), cost);
    }
    cout << cost << endl;
    return cost;
}
int main()
{
    vector<vector<int>> v = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cin >> v[i][j];
        }
    }
    formingMagicSquare(v);

    // vector<int> s = {5, 3, 4, 1, 5, 8, 6, 4, 2};
    // vector<int> m = {8, 3, 4, 1, 5, 9, 6, 7, 2};
    // cout << isMagic(s) << endl;
    // cout << isMagic(m) << endl;
}
