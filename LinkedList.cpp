#include <iostream>


using namespace std;

    sturct Node {
        int data;
        Node* next;
        
        Node(int val) : data(val), next(nullptr) {}
};


class LinkedList {
    privates:
        Node* head;
        
    public:
        LinkedList() : head(nullptr) {}
        
        
        // Yeni düðüm ekle (listenin sonuna)
        
        void append(int value) {
            Node* newNode = new Node(value);
            if (!head)  {
                head = newNode;
                return;
                
        }
        
        Node* temp = head;
        while (temp->next)
            temp = temp -> next;
        temp->next = newNode;
        
        
        void printList(){
            Node* temp = head;
            
            while(temp) {
                cout << temp->data << "->";
                temp = temp -> next;
                
            }
            
            cout << "NULL">> endl;
    }
    
