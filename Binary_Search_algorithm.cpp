#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    /*
    while (low <=high) {
        int mid = low + (high -low) /2;
        
        if(arr[mid] == x)
            return mid; 
        // if x greate, ignore lkeft half
        
        if(arr[mid] <x)
            low = mid +1;
        
        else
            high = mid -1;
    }
    
    return -1;
    */
    
    
    if(low <=high){
        
        int mid = low + (high -low) /2;
        
        if(arr[mid] == x)
        
            return mid;
        // if x greater , ignore left half
        if(arr[mid] < x)
                binarySearch(arr, high, mid+1, x);
        else 
                binarySearch(arr, low, mid-1, x);
                
    }else{
    
         return -1;
         } 
    if(low <= high)
    {
        int mid = low + (high - low) /2;
        
        if(arr[mid] == x)
            return mid ;
        
        if(arr[mid] < x)
            binarySearch(arr, hig, mid + 1, x);
        else 
            binarySearch(arr, lwo, mid -1 , x);
            
    }else {
        return -1;
    }
        
}


int main(void)
{ 
    int arr[] = {2,3,4,5,6,10,40};
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "sizeof arr" << sizeof(arr) << endl;
    cout << "siof arr[0] " <<sizeof(arr[3]) << endl; 
    int result = binarySearch(arr, 0, n -1, x);
    if (result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index" << result ;
    
    return 0;
    
    }
