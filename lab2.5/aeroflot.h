#include <iostream>
#define NAME 0
#define NUMBER 1
#define TYPE 2

using namespace std;

class aeroflot
{
	string prop[3];
	aeroflot* nextPtr;

public:

	aeroflot()
	{
		cout << "aeroflot constructor called" << endl;
	}

	string getName()
	{
		return prop[NAME];
	}
	string getNumber()
	{
		return prop[NUMBER];
	}
	string getType()
	{
		return prop[TYPE];
	}

	void setName(string str)
	{
		prop[NAME] = str;
	}

	void setNumber(string str)
	{
		prop[NUMBER] = str;
	}

	void setType(string str)
	{
		prop[TYPE] = str;
	}


};


class myList
{
	int size;
	aeroflot* HEAD;
	aeroflot* LAST;

public:

	myList()
	{
		cout << "myList constructor called" << endl;
		size = 0;
		HEAD = nullptr;
		LAST = HEAD;
	}





};