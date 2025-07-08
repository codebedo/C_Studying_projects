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
// F�RST SOLUT�ON BRUTE FORCE
class Solution {
        public:
        
            // F�RST SOLUT�ON BRUTE FORCE
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
    
    
    
         TWO-PASS HASH MAP SOLUT�ON 
    
class Solution {
    public:
        
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> numMap; // sayi index �eklinde e�le�tirme i�in hash map
            
            
            //ilk d�ng�de t�m sayilari map'e ekliyoruz(de�er = index)
            for(int i = 0; i < nums.size(); i++){
                numMap[nums[i]] = i ;
            }
            
            // ikinci d�ng�de her sayi i�in tamamalay�c� de�eri ar�oyurz
            for(int i = 0; i < nums.size(); i++){
                int complement = target - nums[i];
                
                // e�er bu tamamlayici map'te varsa ve ayn� index de�ilse e�le�me bulundu 
                if (numMap.count(complement) && numMap[complement] != i){
                    return {i, numMap[complement]}; // E�le�en index �ifti d�nd�r�l�r
                }
            }
            
            // hi�bir e�le�me bulunmad�ysa bo� vector d�nd�r
            return {};
            
        }
        
    };
    
class OneMapSolution {
    public:
        
        vector<int> twoSum(vector<int>&  nums, int target){
            // her bir dizi eleman�n� ve indexini e�itliyoruz
            unordered_map<int, int> numMap;
            //tek bir sefer de t�m dizi de dola��yor... 
            for(int i = 0; i < nums.size(); i++){
                // her say� i�in tamaml�y�c� hesapl�uyor
                int complement = target - nums[i];
                // dahg �nce tamamalay�c�n�n g�r�l�p g�r�lmedi�ini kontrol ediyor...
                if (numMap.count(complement)) {
                    return {numMap[complement], i};
                }
                // �uanki say�y� hash mape ekliyor 
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
