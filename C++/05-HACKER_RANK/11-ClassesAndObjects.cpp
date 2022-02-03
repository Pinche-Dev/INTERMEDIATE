#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    private:
    int a;
    int b;
    int c;
    int d;
    int e;
    public:
    void input(){
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;
    }
    int calculateTotalScore(){
        return a+b+c+d+e;
    }

};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    // Student s1;
    // s1.input();
    // s1.print();
    // return 0;
}
