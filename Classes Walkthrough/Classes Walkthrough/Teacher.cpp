#include "Teacher.h"
using namespace std;

Teacher::Teacher(string name) //or :_name(name);
{
	_name = name;
}


Teacher::~Teacher()
{
}

string Teacher::GetName(string name)
{
	_name = name;
}