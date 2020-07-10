// Preprocessor Directives
#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Expression statements
    // Print welcome statements to the user
    std::cout << "\n***************Welcome, Sam fisher*******************\n";
    std::cout << "\nThis is the training area. Your first task is to break into a level "<< Difficulty;
    std::cout << " server room!\n";
    std::cout << "\nEnter the correct codes to continue\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    /* Declaration Statements.

       Declare the three number codes
       The variable names follow the Unreal Engine
       naming convention */

    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Expression Statements
    std::cout << "+ There are 3 numbers in the code:\n";
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "\nEnter your Guess: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You Win!\n\n";
        return true;
    }
    else
    {
        std::cout << "You entered the incorrect codes. You lose Fisher!!\n\n";
        return false;
    }
}



// Main Function
int main() 
{
    std::cout << std::endl;
    std::cout << "*****************************************************" << std::endl;
    std::cout << ":                      ,....,                       :" << std::endl;
    std::cout << ":                   %(/*.,,,,**(%                   :" << std::endl;
    std::cout << ":                 #/,,.,,,,,,,.,,*%                 :" << std::endl;
    std::cout << ":                #*,.,,,,,,,,,,,.,*#                :" << std::endl;
    std::cout << ":               %(..,,,,,,,,,,,,,.,(%               :" << std::endl;
    std::cout << ":               ((.,,,,,.,,,.,,,,,.(#               :" << std::endl;
    std::cout << ":                &/.,.,,,,,,,,,.,./%                :" << std::endl;
    std::cout << ":                  %/*,,,,,,,,,*#%                  :" << std::endl;
    std::cout << ":         ,..,         &%#%#%&         ,..,         :" << std::endl;
    std::cout << ":     %#**.,,.**/%%               ,#(**,,,.**#%     :" << std::endl;
    std::cout << ":  &#*,,.,,,,,,..,*(&           %(*,.,,,,,,,.,,*#&  :" << std::endl;
    std::cout << ": %(.,,,,,,,,,,,,,.,(%         %/,,,,,,,,,,,,,,,.(% :" << std::endl;
    std::cout << ": #*,,,,,,,,,,,,,,,,*(         #*.,,,,,,,,,,.,,.,*# :" << std::endl;
    std::cout << ": #*,.,,,,,,,,,,,,.,*#         #*,.,,,,,,,,,,,,.,*# :" << std::endl;
    std::cout << ":  %*,.,,,,,,,,,,,,*#          ,#*,.,,,,,,,,,,.,*#  :" << std::endl;
    std::cout << ":   &(*,,,....,,,*(&             &#*.,,...,,,,*#&   :" << std::endl;
    std::cout << ":       &%(##(#%                     &%(##(#%       :" << std::endl;
    std::cout << ":                                                   :" << std::endl;
    std::cout << "*****************************************************" << std::endl;

    // Main body of the program    
    int LevelDifficulty = 1;
    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    
    // Return Satement
    return 0;
}