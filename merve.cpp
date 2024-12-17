#include <iostream>

using namespace std;

class student 
{
	private:
		char student_name[10];
		
		public:
			void getdata(){
				cout << "Enter the student name: "; cin >> student_name;
			}
			void showdata(){
				for(;;){
					cout<< student_name <<"Your brother loves you as much as the operation of this piece of code, even though he has a hard time showing it.\n";
				}
			}
};

int main(){
	
	student m;
	m.getdata();
	m.showdata();
}
