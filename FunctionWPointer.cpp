#include <iostream>

using namespace std;


int *function(){
	int *p = new int;
	*p = 37;
	p = NULL;
	return p;
}

int main()
{
	int *ptr;
	ptr = function();
	
	if(ptr != NULL)
	{
		cout << *ptr << endl;
		delete ptr;
	}
	return 0;
	
	
}
