#include <iostream>
#include "String.h"
#include "Client.h"
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>

using namespace std;


// Function to in-place trim all spaces in the
// string such that all words should contain only
// a single space between them.
/*
void removeSpaces(string &str)
{
	// n is length of the original string
	int n = str.length();

	// i points to next position to be filled in
	// output string/ j points to next character
	// in the original string
	int i = 0, j = -1;

	// flag that sets to true is space is found
	bool spaceFound = false;

	// Handles leading spaces
	while (++j < n && str[j] == ' ');

	// read all characters of original string
	while (j < n)
	{
		// if current characters is non-space
		if (str[j] != ' ')
		{
			// remove preceding spaces before dot,
			// comma & question mark
			if ((str[j] == '.' || str[j] == ',' ||
				str[j] == '?') && i - 1 >= 0 &&
				str[i - 1] == ' ')
				str[i - 1] = str[j++];

			else
				// copy current character at index i
				// and increment both i and j
				str[i++] = str[j++];

			// set space flag to false when any
			// non-space character is found
			spaceFound = false;
		}
		// if current character is a space
		else if (str[j++] == ' ')
		{
			// If space is encountered for the first
			// time after a word, put one space in the
			// output and set space flag to true
			if (!spaceFound)
			{
				str[i++] = ' ';
				spaceFound = true;
			}
		}
	}

	// Remove trailing spaces
	if (i <= 1)
		str.erase(str.begin() + i, str.end());
	else
		str.erase(str.begin() + i - 1, str.end());
}
*/
int main() {
	char name[20] = "  menahem  ";
	char name1[20] = "  dor  ";
	char id[20] = "205870637";
	char id1[20] = "111111111";
	char* aaa = name;
	char* aaa1 = name1;
	char* bbb = id;
	char* bbb1 = id1;
	//cout << "www" << endl;
	String AAA (aaa);
	String AAA1(aaa1);
	String BBB (bbb);
	String BBB1(bbb1);
	cout << AAA << endl;
	cout << BBB << endl;
	cout << AAA1 << endl;
	cout << BBB1 << endl;
	char ttt[10] = "ski";
	char yyy[10] = "chas";
	char uuu[10] = "foot";
	char* tt = new char(4);
	char* yy = new char(6);
	char* uu = new char(6);
	char** ddd = new char*[3];
	ddd[0] = tt;
	ddd[1] = yy;
	ddd[2] = uu;

	char ttt1[10] = "QQQ";
	char yyy1[10] = "WWWW";
	char uuu1[10] = "EEEE";
	char* tt1 = new char(4);
	char* yy1 = new char(6);
	char* uu1 = new char(6);
	char** ddd1 = new char*[3];
	ddd[0] = tt1;
	ddd[1] = yy1;
	ddd[2] = uu1;

	cout << "check1\n";
	Client menahem(BBB, AAA, 'm', 20, 3, ddd);
	cout << "check2\n";
	Client dor = menahem;
	dor.setname(AAA1);
	dor.setid(BBB1);
	cout << dor.getid() << endl;
	cout << dor.getname() << endl;
	cout << menahem.getname() << endl;
	cout << "check3\n";
	dor = menahem;
	cout << dor.getname() << endl;
	cout << dor.getid() << endl;
	cout << "check4\n";
	cout << "check4\n";
	dor.sethob(ddd1);
	cout << menahem.getfirsthob() << endl;
	cout << dor.getfirsthob() << endl;
	
	/*
	Client dor = menahem;
	dor.hobbies = NULL;
	cout << menahem.hobbies << endl;
	cout << dor.hobbies << endl;
	cout << "asd" << endl;
	int i = 0;
	
	cout << "asd" << endl;
	vector <string> v2;
	v2.push_back("Monday");
	v2.push_back("AAAAA");
	v2.push_back("SSSSS");
	v2.push_back("DDDDD");
	
	char* tt = ttt;
	char* yy = yyy;
	char* uu = uuu;
	char** ddd = new char*[sizeof(char*) * 3];
	char** www = ddd;
	*ddd = tt;
	ddd += 1;
	*ddd = yy;
	ddd += 1;
	*ddd = uu;
	int k = 0;
	cout << "asd" << endl;
	while (*www != NULL)
	{
		cout << *www << endl;
		cout << "ww" << endl;
		k++;
		www += 1;
		//cout << "asd" << endl;
	}
	cout << "asd" << endl;
	*/
	//delete ddd;
	//delete ddd1;
	return 0;
}