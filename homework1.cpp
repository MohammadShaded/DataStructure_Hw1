#include"header.h"
#include <iostream>
using namespace std;






	int main() {
	
		registrar Registrar;
		cout << "No courses or students added yet\n";
		cout << Registrar << endl;
		cout << "AddCourse DS10636211\n";
		Registrar.addCourse("DS10636211");
		cout << Registrar << endl;
		cout << "AddStudent Ali_Ahmad\n";
		Registrar.addStudent("Ali_Ahmad");
		Registrar.addStudent("Ali_Ahmad");

		cout << Registrar << endl;
		cout << "AddCourse Java10636212\n";
		Registrar.addCourse("Java10636212");
		cout << Registrar << endl;
		cout << "EnrollStudentInCourse Ali_Ahmad DS10636211\n";
		Registrar.enrollStudentInCourse("Ali_Ahmad", "DS10636211");
		cout << "EnrollStudentInCourse Ali_Ahmad Java10636212\n";
		Registrar.enrollStudentInCourse("Ali_Ahmad", "Java10636212");
		cout << Registrar << endl;
		cout << "EnrollStudentInCourse Haya_Samaana DS10636211\n";
		cout << "Should fail since Haya_Samaana is not a student.\n";
		Registrar.enrollStudentInCourse("Haya_Samaana", "DS10636211");
		cout << Registrar << endl;
		cout << "CancelCourse DS10636211\n";
		Registrar.cancelCourse("DS10636211");
		cout << Registrar << endl;
		cout << "Clear system to start new semester\n";
		Registrar.clear();
		cout << Registrar << endl;
		return 0;
	}






