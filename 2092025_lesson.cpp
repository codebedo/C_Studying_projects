#include <iostream>
using namespace std;



struct Card {
    
    string topic;       // Topic name
    string question;    // question / clue
    string answe;       // answer / explanation
    int box = 1;        // leitner box (1...5)
    long long due = 0;  // another work due (epoch day)
    long long created = 0; // creation due (epoch day)
    long long larsReviewed = 0; // last repeat (epoch day)
    int correctCount = 0;
    int wrongCount = 0;
    
};


static const string DB_FILE = "deck.tsv";


// Leitner  ranges (day): box -> day

static const map<int, int> BOX_INTERVAL = {
    {1 ,0}, // today
    {2, 1},
    {3, 3},
    {4, 7},
    {5, 21}    
};


long long todayEpochDays(){
    }
