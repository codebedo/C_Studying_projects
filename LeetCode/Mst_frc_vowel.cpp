#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>


using  namespace std;

int countLetters( char s[], int size_s){
        int isLetter = 0;
        for(int i = 0; i < size_s; i++){
                if(isalpha(s[i])){
                        isLetter ++;
                }
        }
        return isLetter;
    }
    
    


int main(){
    char s[100];
    gets(s);
    int n = sizeof(s)/sizeof(s[0]);
    cout << countLetters(s, n);
        
    
}
