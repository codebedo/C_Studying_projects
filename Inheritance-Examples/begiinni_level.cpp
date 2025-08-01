#include <iostream>

using namespace std;


// BAse class

class Person{
    
    protected:
        string name;
        int age;
        
    
    public:
        Person(string name, int age) : name(name), age(age) {}
        
        void introduce(){
            cout << "Name: " << name << ", Age: " << age << endl;
        }    
};


// Derived class (türetilmiþ sýnýf) - student
class Student : public Person {
    private:
        string school;
    
    public: 
        Student(string name, int age, string school) : Person(name, age), school(school){}
            
            void study(){
                    cout << name << "is studying at " << school << " . " << endl;
                }    
};


// Derived class (türetilmiþ sýnýf

class Teacher : public Person {
    private:
        string subject;
        
    
    public:
        
        Teacher(string name, int age, string subject) : Person(name, age), subject(subject){}
        
        void teach(){
            cout << name << " is teaching " << subject << "." << endl;
            }    
};



int main() {
        
      Student s("Bedirhan", 23, "Rapsody University");
      Teacher t("Jack", 46, "Software desing Pattern");
      
      cout << "---- Student ----" << endl;
      s.introduce(); 
      s.study();
      
      
      cout << "\n---- Teacher ----" << endl;
      t.introduce();
      t.teach();
      
      
      return 0;
     
          
    
}
