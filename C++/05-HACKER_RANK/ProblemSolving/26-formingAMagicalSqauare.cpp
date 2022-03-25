#include <bits/stdc++.h>

using namespace std;
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
bool isMagic(vector<int> m)
{
    int magic = 15;
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
    int csum[3] = {0, 0, 0};
    for (int i = 0; i < m.size(); i++)
    {
        csum[i % 3] += m[i];
    }
    if (csum[0] != magic || csum[1] != magic || csum[2] != magic)
    {
        return false;
    }
    int LtoR = m[0] + m[4] + m[8];
    int RtoL = m[2] + m[4] + m[6];
    if (LtoR != magic || RtoL != magic)
    {
        return false;
    }
    return true;
}
int transformCost(vector<int> &m, vector<int> &n)
{
    int cost=0;
    for (int i=0;i<m.size();i++){
        cost+= abs(m[i]-n[i]);
    }
    return cost;
}
int formingMagicSquare(vector<vector<int>> s)
{
    int minimum_cost = INT16_MAX;
    vector<int> flatten;
    for (auto &r : s)
    {
        for (auto &c : r)
        {
            flatten.push_back(c);
        }
    }

    vector<int> p = {1,2,3,4,5,6,7,8,9};
    while(next_permutation(p.begin(),p.end())){
        if(!isMagic(p)){
            continue;
        }else{
            minimum_cost=min(minimum_cost,transformCost(flatten,p));
        }
    }
    cout<<minimum_cost<<endl;
    return minimum_cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++)
    {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++)
        {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
