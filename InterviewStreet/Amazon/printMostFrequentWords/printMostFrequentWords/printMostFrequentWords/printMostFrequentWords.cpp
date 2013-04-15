// printMostFrequentWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
using namespace std;

void printMostFrequentWords(vector<string> V);

struct WordMap
{
	int count;
	vector<char> c;
};

void main()
{
	string l1="When riding your bicycle backwards down a one-way street, if the";
	string l2="wheel falls of a canoe, how many ball bearings does it take to fill";
	string l3 = "up a water buffalo?";
	string l4="Hello Howard.";
	vector<string> v;
	v.push_back(l1);
	v.push_back(l2);
	v.push_back(l3);
	v.push_back(l4);
}

void printMostFrequentWords(vector<string> V){
	for(size_t i=0; i < V.size(); i++)
	{
		string temp = V[i];
	}
}

