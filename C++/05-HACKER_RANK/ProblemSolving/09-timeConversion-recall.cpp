#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string hourString = s.substr(0, 2);
    int hour = stoi(hourString);
    size_t pos = s.find("PM");
    cout << pos << endl;
    if (pos != string::npos)
    {
        if (hour + 12 < 24)
        {
            hourString = to_string(hour + 12);
        }
    }
    else
    {
        if (hourString == "12")
        {
            hourString = "00";
        }
    }
    string ret = s.replace(0, 2, hourString).erase(s.size() - 2);
    cout << ret << endl;
    return ret;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
