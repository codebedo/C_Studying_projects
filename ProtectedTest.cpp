#include <bits/stdc++.h>

using namespace std;
// base class
class Parent {
	// protected data members
	protected:
		int id_protected;
};

// alt s�n�f sub class or derived class
class Child : public Parent {
	public:
		
		void setId(int id)
		{
			//Child class is able to acces the inherited
			// alt s�n�f miras almak i�in ba�vuruda bulunuyor
			
			id_protected  = id;
			
		}
		
		void displayId()
		{
			cout << "id_protected is: " << id_protected << endl;
		}
		
};

// main function

int main()
{
	Child obj1;
	
	//member function of the derived class can
	//access the protected data members of the base class
	
	obj1.setId(81);
	obj1.displayId();
	return 0;
}
