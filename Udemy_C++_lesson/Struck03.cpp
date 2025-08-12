#include <iostream>
#include <string>



using namespace std;

struct Student{
    
    int student_no;
    string name;    
};


void studentInfoPrinting(Student* student){
    
    cout<< "Student No : "  << student->student_no << " , Name: " << student->name << endl;
      
}



int main() {
    // Creating two students to dynamic memory
    
    Student* pstudent1 = new Student;
    Student* pstudent2 = new Student;
    
    
    // Value append
    
   pstudent1->student_no = 101;
   pstudent1->name = "Bedo";
   
   pstudent2 = pstudent1;
   
   pstudent2->student_no = 102;
   pstudent2->name = "Exe";
   
   
   
   studentInfoPrinting(pstudent1);
   studentInfoPrinting(pstudent2);
   
   
   // Memeory clearing;
   
   delete pstudent1;
   delete pstudent2;
   
   
   return 0;
    
    
    
}
