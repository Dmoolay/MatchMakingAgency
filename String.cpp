#include "String.h"
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>
using namespace std;

void String::removeSpaces(string &str)
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
int String::checklen(const char* ch)
{
	int i = 0;
	while (ch[i] != NULL)
	{
		i++;
	}
	return i;
}
string String::copy_to_str(char* ch)
{
	string sss(checklen(ch), ' ');
	int i = 0;
	while (ch[i] != NULL && i < checklen(ch))
	{
		sss[i] = ch[i];
		i++;
	}
	return sss;
}

String::String(char* ch)
{
   	string s(ch);
	//s = s + ' ';
	removeSpaces(s);
	str = new char[s.length()+1];
	char* str2 = str;
	for (int i = 0; i <= s.length(); i++) {
		*str2 = s[i];
		str2 += 1;
	}
}

String::String()
{
	this->str = NULL;
}

String::String(const String &obj)
{
	if (obj.str)
	{
		str = new char[checklen(obj.str)+1];
		char* str2 = str;
		char* aa = obj.str;
		for (int i = 0; i <= checklen(obj.str); i++)
		{
			*str2 = *aa;
			str2 += 1;
			aa += 1;
		}
	}
	else
	{
		this->str = NULL;
	}
}

String::~String() {
	//cout << "Deleting a string...\n";
	delete str;
}

String & String::operator=(const String & ob2) {
	delete str;
	str = new char[checklen(ob2.str)+1];
	int j = checklen(ob2.str);
	for (int i = 0; i <= j; i++)
	{
		str[i] = ob2.str[i];
	}
	return *this;
}

bool String::operator ==(const String &ob2)
{
	if (checklen(this->str) != checklen(ob2.str))
	{
		return false;
	}
	int i = 0;
	while (this->str[i] != NULL)
	{
		if (this->str[i] != ob2.str[i])
		{
			return false;
		}
	}
	return true;
}

ostream& operator<<(ostream& os, const String &ss)
{
	os << ss.str;
	return os;
}