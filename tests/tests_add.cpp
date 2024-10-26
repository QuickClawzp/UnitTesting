#include <cassert>     // Include assert for testing
#include <iostream>    // Include iostream for output
#include "../src/main.cpp"  // Include main file to access the add function

// Function to test the add function with various cases
void test_add() {
    assert(add(2, 3) == 5);  // Test positive numbers
    assert(add(-1, 1) == 0); // Test one positive and one negative
    assert(add(0, 0) == 0);  // Test both numbers as zero
    assert(add(-5, -3) == -8); // Test both numbers as negative
    
    // If all assertions pass, print success message
    std::cout << "All tests passed!\n";
}

int main() {
    test_add(); // Run the test cases
    return 0;   // End the program
}
