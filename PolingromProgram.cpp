#include <iostream>
using namespace std;

class Solution {
    public :
        bool isPalindrome(int x){
                int reversed = 0;
                int original = x;
                while(x> 0){
                    reversed = reversed * 10 +(x%10);
                    x /= 10;
                    
                    }
                    
                    return reversed == original ;
            
            }
        
};


int main(){
    
        Solution solution;
        
       int TestCases[] = {121, -121, 10, 12321, 123};
       for(int x : TestCases){
          cout << "Sayi :  " << x
               << "-> Palindrome ? "
               << (solution.isPalindrome(x) ? "Evet" : "Hayir") << endl;
       }
       
       
       return 0;
    }
     
