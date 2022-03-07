#include "Client.h"
using namespace std;
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>

int Client::checklen1(const char* ch)
{
	int i = 0;
	while (ch[i] != NULL)
	{
		i++;
	}
	return i;
}

int Client::checklen(String ch)
{
	int i = 0;
	while (ch.getstr()[i] != NULL)
	{
		i++;
	}
	return i;
}

Client::~Client() {
	//delete id.getstr();
	//delete name.getstr();
	char ** aa = hobbies;
	for (int i = 0; i < num_hobbies; i++)
	{
		if (*aa)
		{
			delete *aa;
			aa += 1;
			//cout << "delete hobb" << endl;
		}
	}
	//cout << "delete hobb!!!!" << endl;
	delete hobbies;
}


Client::Client(String ID, String NAME, char Gen, double Age, int Num_hobbies, char** Hobbies)
{
	this->age = Age;
	this->gen = Gen;
	this->num_hobbies = Num_hobbies;
	this->id = ID;
	this->name = NAME;
	this->hobbies = Hobbies;
}

Client::Client(const Client &obj)
{
	if (obj.gen != '-')
	{
		age = obj.age;
		gen = obj.gen;
		num_hobbies = obj.num_hobbies;
		id = obj.id;
		name = obj.name;
		//hobbies
		char** tmpointer = obj.hobbies;
		char* temphobb = (*obj.hobbies);

		hobbies = new char*[obj.num_hobbies];
		char** real = hobbies;

		for (int j = 0; j < num_hobbies; j++)
		{
			char* p = new char[checklen1(*tmpointer)+1];
			*real = p;
			char* aa = *tmpointer;
			int i = checklen1(*tmpointer);
			for (int k = 0; k <= i; k++) {
				*p = *aa;
				p += 1;
				aa += 1;
			}

			real += 1;
			tmpointer += 1;
		}
	}
	else
	{
		this->id = NULL;
		this->name = NULL;
		this->gen = '-';
		this->num_hobbies = 0;
		this->age = 18;
		this->hobbies = NULL;
	}
}

Client & Client::operator=(const Client & obj)
{
	char ** aa = hobbies;
	for (int i = 0; i < num_hobbies; i++)
	{
		delete *aa;
		aa += 1;
		//cout << "delete hobb" << endl;

	}
	//cout << "delete hobb!!!!" << endl;
	delete hobbies;

	age = obj.age;
	gen = obj.gen;
	num_hobbies = obj.num_hobbies;
	id = obj.id;
	name = obj.name;
	
	char** tmpointer = obj.hobbies;
	char* temphobb = (*obj.hobbies);

	hobbies = new char*[obj.num_hobbies];
	char** real = hobbies;

	for (int j = 0; j < num_hobbies; j++)
	{
		char* p = new char[checklen1(*tmpointer) + 1];
		*real = p;
		char* aa = *tmpointer;
		int i = checklen1(*tmpointer);
		for (int k = 0; k <= i; k++) {
			*p = *aa;
			p += 1;
			aa += 1;
		}

		real += 1;
		tmpointer += 1;
	}
	return *this;
}

bool Client::operator ==(const Client &obj)
{
	if (gen == obj.gen)
	{
		return false;
	}
	double num = abs(age - obj.age);
	if (num > 5)
	{
		return false;
	}
	//hobbies

}


