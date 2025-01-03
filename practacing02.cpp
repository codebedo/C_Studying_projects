#include <iostream>
using namespace std;

// Function to calculate x^n
double powxn(double x, int n) {
    // If the exponent is negative, change x to 1/x and make n positive
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    double result = 1; // Initialize the result

    // Loop to multiply x 'n' times to calculate the power
    for (auto i = 0; i < n; ++i) {
        result = result * x;
    }

    return result; // Return the final result
}

int main(void) {
    // Test cases for calculating x^n and displaying results
    double x = 7.0;
    int n = 2;
    cout << "\n" << x << "^" << n << " = " << powxn(x, n) << endl; 

    x = 3;
    n = 9;
    cout << "\n" << x << "^" << n << " = " << powxn(x, n) << endl; 

    x = 6.2;
    n = 3;
    cout << "\n" << x << "^" << n << " = " << powxn(x, n) << endl;         

    return 0; // Return 0 to indicate successful completion
}
