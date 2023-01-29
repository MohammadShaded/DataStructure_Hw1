#include"header.h"
#include<vector>

course::course(string name)
{
	course_name = name;
}

string course::getName()
{
	return course_name;
}

void course::addStudent(student* s)
{ 
	int x = 0;
	for (int i = 0; i < students.size(); i++) {
		if (s->getName() == students[i]->getName()) {
			x=1;
		}

	}
	if (x == 0) {
		students.push_back(s);
		s->addcourse(this);
	}
}

course::~course()
{
	 
}

void course::removeStudentsFromCourse()
{
	students.clear();
}

void course::remove1 (string m)
{
	int x = 0;
	for (int i = 0; i < students.size(); i++) {
		if (m == students[i]->getName()) {
			students.erase(students.begin() + i);
			x = 1;
		}
	}
	//if (x == 0) { cout << "student does not exist"; }
	
}

ostream& operator<<(ostream& coutt, course c2)
{
	coutt << "\nname of course is :" << c2.getName() << endl;
	coutt << "The names of the students registered in this course:-"<<endl;
	for (int i = 0; i < c2.students.size(); i++) {
		coutt << i + 1 << "-" << c2.students[i]->getName()<<endl;
	}
	cout <<endl<< endl;
	return coutt;
} 

