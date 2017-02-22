#pragma once
#include <string>
class Student
{
private:  //immutable can not be changed
	std::string _name;

public:
	//void SetName(std::string name); //if we wanted to change the student name


	Student(std::string name);//tells it what to do when its created, construtor
	~Student();


	std::string GetName();
};

