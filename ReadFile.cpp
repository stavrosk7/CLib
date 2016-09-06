#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	//-------------------------------------------------------
	//Create (writting) a txt file...
	//ofstream myfile("example.txt");
	//if (myfile.is_open())
	//{
	//	myfile << "This is a line sdfsd.\n";
	//	myfile << "This is another line.\n";
	//	myfile.close();
	//}
	//else cout << "Unable to open file";
	//------------------------------------------------------
	
	
	string str2 = "world";
		
	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
			str2 = line;

		}
		myfile.close();
	}
	else cout << "Unable to open file";
	//------------------------------------------------------


	string str1 = "Hello";
	
	string str3;
	int  len;

	// copy str1 into str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// concatenates str1 and str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// total lenghth of str3 after concatenation
	len = str3.size();
	cout << "str3.size() :  " << len << endl;

	return 0;
}
