#include <iostream>
#include <vector>

using namespace std;



int majorityElment(vector<int>& nums){
    
    
    int n = nums.size();
    
    int majorElement = 0;
    
    int mjcount = 0;
    
    
    for(int i = 0 ; i < n ; i++)
    {
        mjcount = 0;
        
        for(int j = 0; j < n ; j++){
            
            if(nums[i] == nums[j]){
                
                    mjcount++;
                    majorElement= nums[i];
                
                }    
        }    
        
        
        if(mjcount > n/2){
            
            return majorElement;    
        }
    }    
    
    return -1;    
}


int main(){
    
    vector<int> arr = {3,2,3};
    
    cout << majorityElment(arr) << endl;
    
    return 0 ;    
    
}

