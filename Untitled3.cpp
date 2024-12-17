#include <iostream>

using namespace std;

// this is the class for students
class student{
	
	// this is private variable for the class
	
	private:
		int student_regNo;
		char student_name [10];
		public:
			void getdata()
			{
				cout << "Enter student name: "; cin >> student_name ;
				cout << "n Enter student registration number: "; cin>> student_regNo;
			}
			void showdata()
			{
				cout << "student name is" << student_name;
				cout << "n the student registration number is " << student_regNo;
			}
};

int main(){
	
	student s;
	s.getdata();
	s.showdata();
	return 0;
}
