// Preprocessor Directives
#include <iostream>
#include <ctime>

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

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
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
        std::cout << "\nWell done Sam. You cracked the code. Now move on to the next level!\n\n";
        return true;
    }
    else
    {
        std::cout << "\nFisher! What the hell are you doing?. Start over and get it right already!\n\n";
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

    srand(time(NULL));   // Creates a seed for the random funtion (new val. each time)
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\nCongratulations Fisher. You passed the training. Now onto the real deal!\n";

    // Return Satement
    return 0;
}