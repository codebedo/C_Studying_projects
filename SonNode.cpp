#include <iostream>
#include <string>


using namespace std;


struct SongNode{
    string title;
    SongNode* next;
    
    SongNode(string t) : title(t), next(nullptr) {}
    
};

class Playlist {
    private:
        SongNode* head;
        SongNode* current;
        
    
    
    public:
        Playlist() : head(nullptr), current(nullptr) {}
        
        void addSong(const string& title) {
            SongNode* newSong = new SongNode(title);
            
            if(!head) {
                head = newSong;
                current = head;
            } else {
                SongNode* temp = head;
                while (temp->next) temp = temp -> next;
                temp -> next = newSong;
            }
            cout << "Added: " << title << endl; 
        }
        
        void playCurrent(){
            if (current)
                cout << "Now playing: " << current->title<< endl;
            else
                cout << "Playlist is empty.\n";       
}
