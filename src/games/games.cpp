#include "../../include/games.h"
#include "../../include/user_input.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Games::Games(const std::string &username) : username(username) {}

int Games::showMenu()
{
    std::cout << "\n\t********************** Hey " << username << " **********************\n\n";
    std::cout << "\t************* Welcome to the Games Program ***********\n";

    while (true)
    {
        std::cout << "\nChoose one from the following:\n\n";
        std::cout << "1. Rock Paper Scissors\n";
        std::cout << "2. Spinning\n";
        std::cout << "3. Return to Main Menu\n";

        int choice = UserInput::getInteger("Your choice: ", 1, 3);

        switch (choice)
        {
        case 1:
            rockPaperScissors();
            break;
        case 2:
            spinning();
            break;
        case 3:
            return 0;
        }
    }

    return 0;
}

void Games::rockPaperScissors()
{
    std::cout << "\n----- ROCK PAPER SCISSORS -----\n";

    // Seed random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    const char *choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    do
    {
        std::cout << "1. Rock\n";
        std::cout << "2. Paper\n";
        std::cout << "3. Scissors\n";

        userChoice = UserInput::getInteger("Enter your choice (1-3): ", 1, 3);
        userChoice--; // Adjust to 0-based index

        // Computer makes a choice
        computerChoice = std::rand() % 3;

        std::cout << "You chose: " << choices[userChoice] << std::endl;
        std::cout << "Computer chose: " << choices[computerChoice] << std::endl;

        // Determine winner
        if (userChoice == computerChoice)
        {
            std::cout << "It's a tie!\n";
        }
        else if ((userChoice == 0 && computerChoice == 2) ||
                 (userChoice == 1 && computerChoice == 0) ||
                 (userChoice == 2 && computerChoice == 1))
        {
            std::cout << "You win!\n";
        }
        else
        {
            std::cout << "Computer wins!\n";
        }

    } while (UserInput::getYesNo("Play again?"));
}

void Games::spinning()
{
    std::cout << "\n----- SPINNING GAME -----\n";

    // Seed random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int result;

    do
    {
        UserInput::pressEnterToContinue("Press Enter to spin the wheel...");

        // Animate spinning
        std::cout << "Spinning";
        for (int i = 0; i < 3; i++)
        {
            std::cout << ".";
            // Sleep for a short time between dots
            for (int j = 0; j < 100000000; j++)
                ; // Simple delay
        }
        std::cout << std::endl;

        // Random result between 1 and 10
        result = 1 + std::rand() % 10;

        std::cout << "The wheel stopped at: " << result << std::endl;

        if (result >= 8)
        {
            std::cout << "Congratulations! You won!\n";
        }
        else
        {
            std::cout << "Sorry, you lost. Try again!\n";
        }

    } while (UserInput::getYesNo("Play again?"));
}