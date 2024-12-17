#include <iostream>


using namespace std;

 int main(){
 	
 	int counter = 0;
 	int birler, onlar , yuzler, binler;
 	for(int i= 1000; i<=9999; i++){
 		
 		birler = i % 10;
 		onlar = (i / 10) % 10;
 		yuzler = (i/ 100) %10;
 		binler = i / 1000;
 		
 		if(birler != onlar && birler != yuzler != birler != binler && onlar != yuzler && onlar != binler && yuzler != binler )
		  counter = counter + 1; 
 		
	 }
	 
	 cout << "1000 - 9999 arsinda: " << counter << " adet rakamlari farkli tamsayi vardir" ;
 	
 	
 	
 	
 	
 	cout << endl;
 	return 0;
 }
