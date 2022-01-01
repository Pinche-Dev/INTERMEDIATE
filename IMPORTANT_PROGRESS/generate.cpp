#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string year = "2022";
	string month = "01";
	int date = 32;
	for (int i = 1; i < 32; i++)
	{
		string date = year + "-" + month + "-" + to_string(i);
		string fileName = date + ".md";
		ofstream file(fileName);
		// 7/22/2021, 9:27:19 PM added some things  to my next month templte "Your are yourself so work hard to make it perfect"
		string firstPart = "# " + date + "\n\n## things to do \n\n";
		string morning = "- [ ] make your bed\n- [ ] brush your teeth morning\n- [ ] meditate and visualization for 15mins\n";
		string typing = "- [ ] monkeytype for 15mins\n";
		string doneDay = "\n\n\n- [ ] use Anki for more than one hours \n- [ ] use vim for at least 30 mins";

		string study = "\n\n- [ ] study for 3 hrs with 48 mins break\n- [ ] study for 3 hrs with 48 mins break\n- [ ] study for 3 hrs with 48 mins break";
		string evening = " \n\n\n- [ ] brush your teeth in evening\n- [ ] reflect\n- [ ] Journalling\n- [ ] make your table for another day to come ";
		string lastPart = "\n\n## journal \n\n## Quotes of the day  \n\n## read today \n\n## watched today \n\n## photo log\n\n\n";
		string fileWrite = firstPart + morning+typing + study+doneDay + evening + lastPart;
		file << fileWrite;
		file.close();
	}
}
// ###### Thu Jul 22 21:29:12 NPT 2021 testing date adding extensions

