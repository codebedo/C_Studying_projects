#include <iostream>
#include <cstring>


// linked kist node

struct node {
    // key is tring
    char* key;
    
    // value is also string
    char* value;
    struct node* next;
    
    };
    
    
    // like constructor
    void set node(struct node* node, char* key, char* value){
        node -> key = key;
        node -> value = value;
        node -> next = NULL;
        return;
    }
    struct hashMap {
      // current number of elements in hashMap
      // and capacity of hashMap
      int numOfelements, capacity;
      
      // hold base address array of liked list 
      struct node** arr;  
        
        
    };
    
    // like constructor
    
    void initializeHashMap(struct hashMap* mp){
        // default capacity in this base
        
        mp -> capacity = 100;
        mp -> numOfElements = 0;
        // array of size = 1
        mp -> arr = (struct node**)malloc(sizeof(struct node*) * mp->capacity);
        return;
    }
    
        
        
