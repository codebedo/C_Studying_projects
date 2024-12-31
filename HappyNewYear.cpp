#include <iostream>
using namespace std;

void printHappyPattern() {
    const char* happyPattern[] = {
        "H   H  AAAAA  PPPP  PPPP  Y   Y",
        "H   H  A   A  P   P P   P  Y Y ",
        "HHHHH  AAAAA  PPPP  PPPP    Y  ",
        "H   H  A   A  P     P       Y  ",
        "H   H  A   A  P     P       Y  "
    };

    // Print the pattern for "HAPPY"
    for (const char* line : happyPattern) {
        cout << line << "\n";
    }
}

void printNewPattern() {
    const char* newPattern[] = {
        "N   N  EEEEE  W   W",
        "NN  N  E      W   W",
        "N N N  EEEE   W W W",
        "N  NN  E      W W W",
        "N   N  EEEEE  W   W"
    };

    // Print the pattern for "NEW"
    for (const char* line : newPattern) {
        cout << line << "\n";
    }
}

void printYearPattern() {
    const char* yearPattern[] = {
        "Y   Y  EEEEE  AAAAA  RRRR ",
        " Y Y   E      A   A  R   R",
        "  Y    EEEE   AAAAA  RRRR ",
        "  Y    E      A   A  R  R ",
        "  Y    EEEEE  A   A  R   RR"
    };

    // Print the pattern for "YEAR"
    for (const char* line : yearPattern) {
        cout << line << "\n";
    }
}

void print2025Pattern() {
    const char* pattern2025[] = { 
        "  222    000    222   55555",
        " 2   2  0   0  2   2  5",
        "    2   0   0     2   5555",
        "   2    0   0    2        5",
        "  2222   000    2222  5555"
    };

    // Print the pattern for "2025"
    for (const char* line : pattern2025) {
        cout << line << "\n";
    }
}

int main() {
    
    // Call the functions to print the patterns for each word
    printHappyPattern();
  
  	// Add a newline for separation
    cout << "\n";
    printNewPattern();
  
  	// Add a newline for separation
    cout << "\n";
    printYearPattern();
  
  	// Add a newline for separation
    cout << "\n";
    print2025Pattern();

    return 0;
}
