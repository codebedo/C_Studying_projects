#include <iostream>
#include <string>       // Used for std::getline()

// Don't use 'namespace std' - it's bad practice

int main()
{
    int arrSize = 3;    // Now we know the size of the array, we won't exceed arr[2]
    std::string arr[3] = { "X", "XX", "XXX" };
    std::string input;

    std::cout << "Enter input: ";   // A propmt would be useful
    std::getline(std::cin, input);  // Much better way to get input

    for (unsigned int i = 0; i < arrSize; ++i)  // Now we won't exceed the array size
    {
        if (input == arr[i])    // Compare the input string (not character) with each string in arr[]
            std::cout << "Your input is at position " << i << std::endl;
        else
            std::cout << "Your input is not at position " << i << std::endl;
    }

    std::cin.ignore();      // Wait for user to press enter before exiting
    return 0;
}
