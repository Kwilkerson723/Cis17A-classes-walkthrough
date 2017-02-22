#include "Student.h"
using namespace std;
//constructor without any parameters is a default constructor
Student::Student(string name) // :_name(name) shorthand way of writing it
{
	_name = name;
}


Student::~Student()
{

}

std::string Student::GetName() //accessor function
{
	return _name;
}
