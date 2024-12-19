#include <iostream>

using namespace std;


int main(){
	
	int *p;
	p = NULL;	
	
	if(p != NULL)
	{
		*p = 5;
	}else 
	{
		p = new int(5);
	}
	cout << *p << endl;
	
	
	
	
	
	
	
	return 0;
	
}

