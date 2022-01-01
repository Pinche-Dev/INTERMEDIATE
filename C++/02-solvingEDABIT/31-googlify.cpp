#include <iostream>
using namespace std;


std::string googlify(int n) {
std::string O;
for (int i=0;i<n;i++){
    O+='o';
}	
    if (n==1){
        O="oo";
    }else if(n==2){
        O="oo";
    }
if (n>=2){
return "G"+O+"gle";   
}else return "invalid";
}

std::string googlify(int n) {
	if(n <= 1) return "invalid";
	return 'G' + std::string(n ,'o') + "gle";
}

int main()
{
cout<<googlify(4)<<endl;
}
