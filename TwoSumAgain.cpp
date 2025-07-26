#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class solution {
        public:
        
            vector<int> TwoSum(vector<int>&  nums, int target){
                
                    unordered_map<int, int> NumMap;
                    
                    for(int i = 0; i < nums.size(); i++){
                        
                            int Complement = target - nums[i];
                            
                            if(NumMap.count(Complement)){
                                
                                    return{NumMap[Complement], i};
                                }
                            NumMap[nums[i]] = i;
                        }
                        
                    return {};
                }     
    
};



int main(){
    
    vector<int>  nums = {1,2,3,8,9,12};
    int target = 10;
    
    solution Solution ;
    
    
    vector<int> result = Solution.TwoSum(nums,target);
    
    if(!result.empty()){
        cout << "Indexes: " << result[0] << ", " << result[1] << endl;
    }else {
        cout << "No solution found."<< endl;
    }
    
    return 0; 
    
}
