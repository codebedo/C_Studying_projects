#include <iostream>

using namespace std;


void func(int *p)
{
	if(p != NULL)
		cout << *p <<endl;
}

int main(){
	
	
	int *p = new int;
	*p = 5;
	
	cout << *p << endl;
	
	delete p;
	
	p = NULL;
	
	// NUll olan pointerin içeriði deðiþtirilemez ama new int ile deðiþtirilebilir.
	p = new int;
	*p = 10;
	cout << *p <<endl;
	delete p;
	return 0;
}
