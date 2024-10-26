#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;  // Return the sum of a and b
}

int main() {
    int num1, num2;  // Variables to hold user input numbers
    
    // Prompt user for the first number
    std::cout << "Enter first number: ";
    std::cin >> num1;

    // Prompt user for the second number
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Call the add function and store the result
    int result = add(num1, num2);

    // Display the result to the user
    std::cout << "The sum is: " << result << std::endl;

    return 0;  // End the program
}
