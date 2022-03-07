#include "MatchMakingAgency.h"
using namespace std;
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <vector>


MatchMakingAgency::MatchMakingAgency()
{
	num_cus = 0;
	v1.clear();
}

MatchMakingAgency::~MatchMakingAgency() {
	//cout << "Deleting a string...\n";
	//
	//
	//
	//
}
/*
MatchMakingAgency & MatchMakingAgency::operator=(const MatchMakingAgency & ob2)
{
	num_cus = ob2.num_cus;
	for (auto it = v1.begin(); it != v1.end(); ++it)
	{
		delete it->name.getstr();
	}
}

void MatchMakingAgency::find_match(char *)
{

}

ostream & operator<<(ostream & os, const MatchMakingAgency & dt)
{
	// TODO: insert return statement here
}
*/