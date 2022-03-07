#pragma once
using namespace std;
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include "String.h"

class Client
{
private:
	int checklen(String);
	int checklen1(const char*);
	String id;
	String name;
	char gen;
	double age;
	int num_hobbies;
	char** hobbies;

public:
	void setid(String A) { id = A; }
	void setname(String B) {name = B; }
	char* getid() { return id.getstr(); }
	char* getname() { return name.getstr(); }
	char* getfirsthob() { return *hobbies; }
	void sethob(char** A) { hobbies = A; }
	Client(String id = NULL, String name = NULL, char gen ='-', double age = 18, int num_hobbies = 0, char** hobbies = NULL);
	Client(const Client &obj);
	~Client();
	Client & operator=(const Client &obj);
	bool operator==(const Client &obj);
};

