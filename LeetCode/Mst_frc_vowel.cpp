#include <iostream>
//#include <bits/stdc++.h>ü
#include <string.h>
#include <stdio.h>
#include <ctype.h>


using  namespace std;


// WRONGEXAMPLE DON NOT USE
/*
int countLetters( char s[], int size_s){
        int isLetter = 0;
        for(int i = 0; i < size_s; i++){
                if(isalpha(s[i])){
                        isLetter ++;
                }
        }
        return isLetter;
    }*/
    
    


int main(){
    
    // this WRONG EXAMPLE DO NOT USE
    /*
    char s[100];
    gets(s);
    int n = sizeof(s)/sizeof(s[0]);
    cout << countLetters(s, n);*/ 
    
    
    char szInput[256];
    printf("Enter a sentence: ");
    gets(szInput);
    printf("The sentence entered is %u characters long. \n",(unsigned)strlen(szInput));
    
    string vowel[5] = { 'a', 'e', 'i', 'o', 'u'};
    
    
    
    
    
    return 0;
    
}
