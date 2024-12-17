#include "bits/stdC++.h"

using namespace std;

class program {
	private:
		string str = "Welcome to proramming!";
		public:
			
			void printString(){
				cout << str << 'n';
				
			}
};

// Driver code

int main(){
	
	program p;
	
	p.printString();
	return 0;
}
