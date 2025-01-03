#include <iostream> // Include input/output stream library
#include <string> // Include string manipulation library
#include <sstream> // Include stringstream for string conversions
using namespace std; // Using standard namespace

// Function to calculate the additive persistence of a number
int AdditivePersistence(int num) {

	int ctr = 0; // Counter to track the number of iterations

	// If the number is a single digit, return 0 as additive persistence
	if (num < 10)
	{
		return 0;
	}

	stringstream convert; // Create a stringstream object for conversion
	convert << num; // Insert the number into the stringstream
	string y = convert.str(); // Convert the number to a string
	int total_num, n; // Variables for calculations

	// Loop until the total is reduced to a single digit
	do
	{
		total_num = 0; // Initialize the total sum to 0
		ctr++; // Increment the counter for each iteration

		// Calculate the sum of individual digits in the number
		for (int x = 0; x < y.length(); x++)
		{
			n = int(y[x]) - 48; // Convert character to integer by ASCII conversion
			total_num += n; // Add the digit to the total sum
		}

		stringstream convert; // Create a stringstream object for conversion
		convert << total_num; // Insert the total sum into the stringstream
		y = convert.str(); // Convert the total sum to a string
	} while (total_num >= 10); // Repeat until the total sum is a single digit
	
	return ctr; // Return the number of iterations
}

int main() {
	// Test cases to calculate additive persistence
	cout << "Additive persistence of 4 is " << AdditivePersistence(4) << endl;
	cout << "\nAdditive persistence of 125 is " << AdditivePersistence(125) << endl;
	cout << "\nAdditive persistence of 5489 is " << AdditivePersistence(5489) << endl;
	cout << "\nAdditive persistence of 36024 is " << AdditivePersistence(36024) << endl;
	return 0; // Return 0 to indicate successful completion
}
