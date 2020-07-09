// Preprocessor Directives
#include <iostream>

// Main Function
int main() 
{
    // Expression statements
    // Print welcome statements to the user
    std::cout << "Welcome, Sam fisher";
    std::cout << std :: endl;
    std::cout << "You are in the training area and your task is to break into a secure server room!" << std::endl;
    std::cout << std :: endl;
    std::cout << "Enter the correct codes to continue" << std::endl;
    std::cout << std::endl;

    /* Declaration Statements.

       Declare the three number codes
       The variable names follow the Unreal Engine
       naming convention */

    const int CodeA = 5;
    const int CodeB = 13;
    const int CodeC = 2;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Expression Statements
    std::cout << "+ There are 3 numbers in the code:" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to: " << CodeProduct << std::endl;

    int PlayersGuess;

    // Return Satement
    return 0;
}