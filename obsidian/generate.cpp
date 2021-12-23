#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// string year = "2021";
	// string month = "07";
	// int date = 32;
	for (int i = 1; i < 112; i++)
	{
		// string date = year + "-" + month + "-" + to_string(i);
		string date;
		if (i < 10)
		{
			date = "00" + to_string(i);
		}
		else if (i < 100)
		{
			date = "0" + to_string(i);
		}
		else
		{
			date = to_string(i);
		}
		string fileName = date + "-.md";
		ofstream file(fileName);
		// string fileWrite = "# " + date + "\n\n## things to do \n\n - [ ] make your bed\n- [ ] brush your teeth morning \n\n\n  \n\n\n- [ ] brush your teeth in evening\n - [ ] reflect \n - [ ] make your table for another day to come \n\n## journal \n\n\n## routine  \n\n## read today \n\n## watched today \n\n## photo log";
		string fileWrite = "I want to go big on Writing aobut Programming,Journalling,life success  and other things so I created 111 files for each at once ";
		file << fileWrite;
		file.close();
	}
}