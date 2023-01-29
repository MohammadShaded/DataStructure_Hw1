#pragma once
class student;
class course;
class registrar;

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#include"student.h"



class course {
private:
	string course_name;
	vector <student*> students;
public:
	course(string name);
	string getName();
	void addStudent(student *s);
	~course();
	void removeStudentsFromCourse();
	friend ostream& operator << (ostream& coutt, course c2);
	void remove1(string);
};





class student {
private:
	string student_name;
	vector <course*> courses;
public:
	student(string name);
	string getName();
	bool addcourse(course* c);
	~student();
	void removedFromCourse(course* C);
	friend ostream& operator <<(ostream& coutt, student c2);

};





class registrar {

private:
	vector<student*> students;
	vector<course*> courses;
	int findStudent(string s);
	int findCourse(string c);

public:	

	registrar();
	bool addCourse(string c);
	bool addStudent(string s);
	bool enrollStudentInCourse(string SN, string CN);
	bool cancelCourse(string c);
	void clear();
	friend ostream& operator <<(ostream& cout, registrar r2);

};