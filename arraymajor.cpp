#include <iostream>
#include <vector>

using namespace std;



int main() {
    
    
   // vector<int> arr = {3,2,3};
    vector<int> arr = {2,2,2,1,1,1,2,2};
    
    
    
    
    int count = 0;
    int mjcount = 0;
    
    
    for(int i = 0 ; i < arr.size(); i++)
        {
            
            
            
            
            for(int j = 0 ; j < i ; j++){
                
                    if(arr[i] == arr[j]){
                            mjcount++;
                            cout << i << ":"<< j << " Esitlik bulundu  " << arr[i] << " : " << arr[j] << "  " << "Major count: " << mjcount << endl;
                            
                            cout << arr[i] << endl;
                                  
                        
                    }else{
                        cout << " ************************************************************************************************************* " << endl;
                        cout << i << " : " << j << " Esitlik bulunamadý " << arr[i] << " : " << arr[j] << "  "  << "Major count : " << mjcount << endl;
                        
                    }
                    
                }
                
        
        
        
    }
    
    
    return 0;
    
        
}
