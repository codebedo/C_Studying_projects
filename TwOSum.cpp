#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
// Two sum problem solving example repeat again

/*
class Solving{
    public:
        vector<int> twosum(vector<int>& nums, int target) {
                unordered_map<int, int> numMap;
                
                for(int i =0; nums.size(); i++){
                        int complement = target - nums[i];
                        if(numMap.count(complement)){
                                return{numMap[complement], i};
                            }
                            
                            numMap[nums[i]] = i;
                    }
                    
                    return {} ;
            
            }
        
        };*/
        
class Solution{
        public: 
            vector<int> TwoSum(vector<int>& nums, int target){
                    unordered_map<int, int> numMap;
                    
                    for(int = 0; i < nums.size(); i++){
                        
                            int complement = target - nums[i];
                            
                            if(numMap.count(complement)){
                                    return{numMap[complement], i};
                                    
                                }
                                numMap[nums[i]] = i;
                        }
                        
                        return {};
                
                }

};



/*
// TWO SUM PROBLEMS FOR LEETCODE
// FÝRST SOLUTÝON BRUTE FORCE
class Solution {
        public:
        
            // FÝRST SOLUTÝON BRUTE FORCE
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
    
    
    
         TWO-PASS HASH MAP SOLUTÝON 
    
class Solution {
    public:
        
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> numMap; // sayi index þeklinde eþleþtirme için hash map
            
            
            //ilk döngüde tüm sayilari map'e ekliyoruz(deðer = index)
            for(int i = 0; i < nums.size(); i++){
                numMap[nums[i]] = i ;
            }
            
            // ikinci döngüde her sayi için tamamalayýcý deðeri arýoyurz
            for(int i = 0; i < nums.size(); i++){
                int complement = target - nums[i];
                
                // eðer bu tamamlayici map'te varsa ve ayný index deðilse eþleþme bulundu 
                if (numMap.count(complement) && numMap[complement] != i){
                    return {i, numMap[complement]}; // Eþleþen index çifti döndürülür
                }
            }
            
            // hiçbir eþleþme bulunmadýysa boþ vector döndür
            return {};
            
        }
        
    };
    
class OneMapSolution {
    public:
        
        vector<int> twoSum(vector<int>&  nums, int target){
            // her bir dizi elemanýný ve indexini eþitliyoruz
            unordered_map<int, int> numMap;
            //tek bir sefer de tüm dizi de dolaþýyor... 
            for(int i = 0; i < nums.size(); i++){
                // her sayý için tamamlýyýcý hesaplýuyor
                int complement = target - nums[i];
                // dahg önce tamamalayýcýnýn görülüp görülmediðini kontrol ediyor...
                if (numMap.count(complement)) {
                    return {numMap[complement], i};
                }
                // þuanki sayýyý hash mape ekliyor 
                numMap[nums[i]] = i;
            }
            return {};
        }
    };


class leornSecond {
    public:
        
        
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numMap;
            
            for(int i = 0; i < nums.size(); i++){
                    int complement = target - nums[i];
                    
                    if(numMap.count(complement)){
                        return {numMap[complement],i};
                        }
                        
                        numMap[nums[i]] = i;
                        
                }
                return {};
                
                
                
        
        }
        
        vector<int> twosum(vector<int>& nums, int target){
            unordered_map<int , int> numMap;
            for(int i = 0; i< nums.size(); i++){
                int complement = target - nums[i];
                
                if(numMap.count(complement)){
                    return {numMap[complement], i};
                    }
                    
                    num[nums[i]] = i;
                }
            }
            return {};
        }
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> numMap;
            
            for(int i = 0; i < nums.size(); i++){
                int complement = target - nums[i];
                
                if(numMap.count(complement)){
                    return {numMap[complement], i}
                }
                numMap[nums[i]] = i ;
            }
            
            return {];
            
        }
        
        

};
    
class learnSolt {
    public:
        vector<int> twosum(vecto<int>& nums, int target){
                unordered_map<int, int> numMap;
                
                for(int i = 0; i < nums.size(); i++){
                        int complement = target - nums[i];
                        
                        if(numMap.count(complement)){
                                return {numMap[complement], i};
                            }
                            numMap[nums[i]] = i;
                            
                    }
                    return {};
                
            }
                
};


class learnfridat{
    public: 
        vector <int> twosum(vector<int>& nums, int target) {
            unordered_map<int, int> numMap;
            for(int i = 0; i < nums.size(); i++){
                int complement = target - nums[i];
                if(numMap.count(complement)){
                    return {numMap[complement], i};
                    }
                    numMap[nums[i]] = i;
                }
                
                return {};
                
            
            }
            
        
    };

    int main(){
        
        vector<int> nums= {2,7,11,15};
        int target = 9;
        
        
        
        //Solution solution;
        //OneMapSolution fastsolution;
        learnSolt lsolt;
        
        
        //vector<int> result = solution.twoSum(nums, target);
       // vector<int> result = fastsolution.twoSum(nums, target);
        vector <int> result = lsolt.twosum(nums, target);
        
        if(!result.empty()){
            cout<< "Indexes: " << result[0] << ", " << result[1] << endl;
            
        } else {
            cout << "No solution found." << endl;
        }
        
        
        return 0;
    }
*/




int main(){
    
    
    vector<int> nums = {2,7,2,34};
    int target = 9;
    
    Solution solution;
    
    vector<int> result = solution.TwoSum(nums,target);
    
    
    if(!result.empty()){
        cout << "Indexes: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found."<< endl;
    }
    
    return 0;
    
    }
