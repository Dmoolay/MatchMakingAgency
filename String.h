#pragma once
using namespace std;
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>

class String
{
private:
	char* str;
	int checklen(const char*);
	string copy_to_str(char*);
	void removeSpaces(string &str);
public:
	void setstr(char* A) { str = A; }
	char* getstr() { return str; }
	String();
	String(char* str);
	String(const String &obj);
	~String();
	String & operator=(const String &ob2);
	bool operator==(const String &ob2);
	friend ostream& operator<<(ostream &os, const String &dt);
};



