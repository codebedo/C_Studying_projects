#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
        public:
            
            vector<int> twoSum(vector<int>& nums, int target){
                    unordered_map<int, int> numMap;
                    
                    for(int i = 0; i < nums.size(); i++){
                            int complement = target - nums[i];
                            if(numMap.count(complement)){
                                 return{numMap[complement], i};
                                
                                }
                                
                                numMap[nums[i]] = i;
                        }
                        
                        return {};
                
                }

};


int main() {
    
    vector<int> nums = {1,3,5,8,7};
    int target = 8;
    Solution solution;
    
    
    vector<int> result = solution.twoSum(nums, target);
    
    
    if(!result.empty()){
            cout << "Indexes" << result[0] << result[1]<< endl;
    }else{
            cout << "Indexes not found "<< endl;    
    }
    
    
    return 0;
}

