#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Song
{
private:
	string name;
	string author;
	int year;
public:
	Song();
	Song(string name, string author, int year);

	void show()const;
};
