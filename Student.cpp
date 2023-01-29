#include "header.h"
#include "student.h"

student::student(string name)
{
	student_name = name;
}

string student::getName()
{
	return student_name ;
}

bool student::addcourse(course* c)
{
	for (int i = 0; i < courses.size(); i++) {
		if ((c->getName()) == courses[i]->getName()) {
			return false;
		}
	}
	courses.push_back(c);
	c->addStudent(this);
}

student::~student()
{
}

void student::removedFromCourse(course* c)
{
	int x = 0;
	for (int i = 0; i < courses.size(); i++) {
		if (c->getName() == courses[i]->getName()) {
			courses.erase(courses.begin() + i);
			x = 1;
		}
	}
	if (x ==0) { cout << "course does not exist"; }
	c->remove1(student_name);
}


ostream& operator<<(ostream& coutt, student s2)
{
	coutt << "name of student is :" << s2.getName() << endl;
	coutt << "The courses in which the student registered:- "<<endl;
	for (int i = 0; i < s2.courses.size(); i++) {
		coutt <<i+1<<"-" << s2.courses[i]->getName()<<endl;
	}
	cout << endl;
	return coutt;


}







