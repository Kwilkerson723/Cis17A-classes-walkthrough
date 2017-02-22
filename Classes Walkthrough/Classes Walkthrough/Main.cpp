#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std; 

int main()
{

	Teacher james = Teacher("james"); //instantiating 
	cout << james.GetName() << endl; 

	//Student bob = Student("bob");
	//cout << bob.GetName() << endl; 
	//getchar();
	return 0; 
}