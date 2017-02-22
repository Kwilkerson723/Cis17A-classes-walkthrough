#include "Student.h"
using namespace std;

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
