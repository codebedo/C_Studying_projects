// C++ Program to illustrate how to split a string into an
// Array of substrings

#include <iostream>
#include <sstream>
#include <string>


using namespace std;

//Function to split a string  into tokens based on a
// delimiter

void splitString(string& input, char delimeter, string arr[], int& index)
{
    //Creating an input string stream from the input string
    istringstream stream(input);
    
    
    //Temporary string to store each token
    string token;
    
    //Read tokens from the string stream spareted by the
    //delimeter
    while(getline(stream, token, delimeter)){
        // add the token to the array
        arr[index++] = token;    
    }
    
}

int main(){
    // Input string
    string input = "Hey this is a test for strings saparate examples";
    
    // delimeter
    
    char delimeter = ' ';
    
    // Array to store the substrings
    string arrayOfSubStr[100];
    
    // Index to keep track of the number of substrings
    int index = 0;
    
    // Calling the functions to split the input string into
    // an array of substrings 
    splitString(input , delimeter, arrayOfSubStr, index);
    
    
    // print the array of substrings)
    
    for(int i = 0; i < index ; i++){
        cout << arrayOfSubStr[i] << endl;
            
    }   
    
    return 0; 
}

