#include "Course.h"
#include "Student.h"
#include "Teacher.h"
#include <string>
using namespace std; 

Course::Course(string name, string description) : _name(name), _description(description)
{
}


Course::~Course()
{
}

bool Course::EnrollStudent(Student newStudent, int position)
{
	if (position <=9 &&_student[position].GetName() != "Null"){//if the student position is less than 9 (0-9) you can getname
		_student[position] = new student;
		return true;
	}
}