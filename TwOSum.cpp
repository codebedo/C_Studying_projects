#include <iostream>
#include <vector>

using namespace std;

// TWO SUM PROBLEMS FOR LEETCODE
// F�RST SOLUT�ON BRUTE FORCE
class Solution {
        public:
            
            vector<int> twoSum(vector<int>& nums, int target){
                // T�m elemanlar aras�nda �ifltler olu�turup kontrol ediyoruz
                for (int i = 0; i < nums.size(); i++){
                    
                    for(int j = i + 1; j < nums.size(); j++){
                        // e�er iki sayinin toplam� hedefe e�it ise
                        if(nums[i] + nums[j] == target){
                            // o zman bu iki indexi i�eren bir vector d�nd�r
                            
                            return {i, j};
                        }
                    }
                
                }
                
               //e�er hi�bir �ift hedefi sa�lam�yorsa bo� bir vect�r d�nd�r
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
