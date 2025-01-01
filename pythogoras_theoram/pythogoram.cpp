#include <iostream>
#include <cmath>
#include <limits>  // For std::numeric_limits

// Function to find hypotenuse
float findHypo(double s1, double s2) {
    double hypo = sqrt(pow(s1, 2) + pow(s2, 2));
    return hypo;
}

// Function to handle input and check if the input is a valid number
double getValidInput(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        // Check if the input failed (i.e., non-numeric input)
        if (std::cin.fail()) {
            std::cin.clear();  // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the invalid input
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
        } else {
            return value;
        }
    }
}

int main() {
    // Prompt user for side lengths and ensure valid input
    double side1 = getValidInput("Enter first side length: ");
    double side2 = getValidInput("Enter second side length: ");

    // Calculate and display the hypotenuse
    double hypo = findHypo(side1, side2);
    std::cout << "The hypotenuse is: " << hypo << "." << std::endl;

    return 0;
}
