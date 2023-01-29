#include"header.h"


int registrar::findStudent(string s)
{
	for (int i = 0; i < students.size(); i++) {
		
		if (s == students[i]->getName()) {
			return i;
		}
	}
	return -1;
}
int registrar::findCourse(string c)
{
	for (int i = 0; i < courses.size(); i++) {
		if (c == courses[i]->getName()) {
			return i;
		}
	}
	return -1;
}

registrar::registrar()
{

}

bool registrar::addCourse(string c)
{
	course *m=new course(c);
	courses.push_back(m);
	return false;
}

bool registrar::addStudent(string s)
{
	if (findStudent(s) == -1) {
		student* n = new student(s);
		students.push_back(n);
		return false;
	}
}

bool registrar::enrollStudentInCourse(string SN, string CN)
{
	if (findStudent(SN) == -1 || findCourse(CN) == -1) {
		cout<<"\n************** the operation fails **************\n"<<endl;
		return false; }
	else {
		students[findStudent(SN)]->addcourse(courses[findCourse(CN)]);
		return true;
	}
}


bool registrar::cancelCourse(string c)
{
	int x = findCourse(c);
	if (x == -1) {return false;}
	else {
		courses[x]->removeStudentsFromCourse(); 
		for (int i = 0; i < students.size(); i++) {
			students[i]->removedFromCourse(courses[x]);
		}
		return true;
	}
}

void registrar::clear()
{
	students.clear();
	courses.clear();
}

ostream& operator<<(ostream& coutt, registrar  r2)
{
	int i = 0;
	for (i; i <r2.courses.size(); i++) {
		coutt << *r2.courses[i];
	}
	if (i == 0) { cout << "\ncourses:empty"<<endl; }
	
	cout << endl;
	int  j = 0;
	for (j ; j < r2.students.size(); j++) {
		coutt << *r2.students[j];
	}
	if (j == 0) { cout << "students:empty\n"<<endl; }

	return coutt;
}

