#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string  hoursString  = s.substr(0,2);
    int hour = stoi(hoursString);
    size_t pos = s.find("PM");
    if (pos!=string::npos){
        if (hour+12<24){
            hour+=12;
            hoursString=to_string(hour);
        }
    }else{
        if (hour==12){
            hoursString="00";
        }
    }
    string ssss= s.replace(0,2,hoursString).erase(s.size()-2);
    // cout<<ssss<<endl;
    return ssss;

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
