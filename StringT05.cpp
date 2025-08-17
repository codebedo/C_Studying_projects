#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "geeks,for,geeks";

    // Delimiter pattern
    regex del(",");

    // Create a regex_token_iterator 
    // to split the string
    sregex_token_iterator it(str.begin(), 
                     str.end(), del, -1);

    // End iterator for the 
    // regex_token_iterator
    sregex_token_iterator end;

    // Iterating through each token
    while (it != end) {
        cout << "\"" << *it << "\"" << " ";
        ++it;
    }
    return 0;
}
