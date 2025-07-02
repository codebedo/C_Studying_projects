#include <iostream>
#include <vector>

using namespace std;

// TWO SUM PROBLEMS FOR LEETCODE
// FÝRST SOLUTÝON BRUTE FORCE
class Solution {
        public:
            
            vector<int> twoSum(vector<int>& nums, int target){
                // Tüm elemanlar arasýnda çifltler oluþturup kontrol ediyoruz
                for (int i = 0; i < nums.size(); i++){
                    
                    for(int j = i + 1; j < nums.size(); j++){
                        // eðer iki sayinin toplamý hedefe eþit ise
                        if(nums[i] + nums[j] == target){
                            // o zman bu iki indexi içeren bir vector döndür
                            
                            return {i, j};
                        }
                    }
                
                }
                
               //eðer hiçbir çift hedefi saðlamýyorsa boþ bir vectör döndür
               return {};
            }
    };
    
    
    int main(){
        
        vector<int> nums= {2,7,11,15};
        int target = 9;
        
        
        
        Solution solution;
        
        
        vector<int> result = solution.twoSum(nums, target);
        
        
        if(!result.empty()){
            cout<< "Indexes: " << result[0] << ", " << result[1] << endl;
            
        } else {
            cout << "No solution found." << endl;
        }
        
        
        return 0;
    }
