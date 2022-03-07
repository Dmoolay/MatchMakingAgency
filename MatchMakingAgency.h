#pragma once
using namespace std;
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include "String.h"
#include "Client.h"

class MatchMakingAgency
{
private:
	int num_cus;
	vector <Client> v1;

public:
	MatchMakingAgency();
	~MatchMakingAgency();
	MatchMakingAgency & operator=(const MatchMakingAgency &ob2);
	void find_match(char*);
	friend ostream& operator<<(ostream &os, const MatchMakingAgency &dt);

};

