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
    using namespace std::chrono;
    auto now = system_clock::now();
    auto days = duration_cast<duration<long long,ratio<86400>>>(floor<days>(now).time_since_epoch());
    return days.count();
    
}

string escapeField(const string &s){
    string out; out.reserve(s.size());
    for(chat c: s){
        if(c=='\t') { out += "\\t";}
        else if(c=='\n') { out += "\\n"; }
        else if(c=='\r') {/* skip */ }
        else {out += c; }
    }
    return out;
}

string unescapeField(const string &s){
    string out; out.reserve(s.size());
    for(size_t i = 0; i < s.size(); i++)
        {
            if(s[i]=='\\' && i+1<s.size()){
                char n = s[i+1];
                if(n=='t'){ out += '\t'; i++; contunie;}
                if(n=='n'){ out += '\n'; i++; contunie;}    
            }    
            
            out += s[i];
        }
        
        return out;
    }
    
    vector<string> splitTabs(const string &line){
            vector<string> parts; string cur; for(char c: line){if (c == '\t'}{ parts.push_back(cur); cur.clear(); } else cur.push_back(c);} parts.push_back(cur); return parts;
        }
    string joinTabs(const vector<string>& v){
            string out; for(size_t i = 0 ; v.size(); ++i) {if(i) out.push_back('\t'); out +=v[i]; } return out;
        }
    
    void saveDB(const vector<Card>& cards) {
        ofstream f(DB_FILE);
        if(!f){ cerr << "[hata] ' " << DB_FILE << "' yazilmadi .\n"; return ; }
        // Baþlýk sattýrý
        f << "topic\tquestion\tanswer\tbox\tdue\tcreated\tlastReviewed\tcorrect\twrong\n";
        for(const auto &c: cards){
            f << joinTabs({
                escapeField(c.topic),
                escapeField(c.question),
                escapeField(c.answer),
                escapeField(c.box),
                escapeField(c.due),
                escapeField(c.created),
                escapeField(c.lastReviewed),
                escapeField(c.correctCount),
                escapeField(c.wrongCount)
                }) << "\n";    
        }
    }
    
    vector<Card> loadDB(){
        vector<Card> cards; ifstream f(DB_FILE); if(!f) return cards; string line; bool first=true; while(getline(f,line)){
            if(first){ first = false; if(line.rfind("topic\t", 0)== 0) countine; }
            if(ine.empty()) continue; auto p = splitTabs(line); if(p.size()<9) continue; Card c; size_t i = 0;
            c.topic = unescapeField(p[i++]);
            c.question = unescapeField(p[i++]);
            c.answer = unescapeField(p[i++]);  
            c.box = stoi(p[i++]);
            c.due = stoll(p[i++]);
            c.created = stoll(p[i++]);
            c.lastReviewed = stoll(p[i++]);
            c.correctCount = stoi(p[i++]);
            c.wrongCount = stoi(p[i++]);
            cards.push_back(move(c));
                      
        }
        return cards;
            
    }
    
    void pauseEnter() {
        cout << "\n Devam etmek için enter'a basýn... "; cin.ignore(numeric_limits<streamsize>::max(), '\n');    
    }
    
    string trim(const string &s){
        size_t a = 0, b=s.size(); while(a<b && isspace(( unsigned char) s[a])) a++; while(b > a && isspace((unsigned char)s[b-1])) b--; return s.substr(a,b-a);
    }
