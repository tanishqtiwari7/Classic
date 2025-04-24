#include "../include/user_input.h"
#include <iostream>
#include <limits>
#include <cctype>

int UserInput::getInteger(const std::string &prompt, int min, int max)
{
    int value;
    bool valid = false;

    do
    {
        std::cout << prompt;

        if (!(std::cin >> value))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error: Invalid input. Please enter a number.\n";
            continue;
        }

        // Clear the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (value < min || value > max)
        {
            std::cout << "Error: Value must be between " << min << " and " << max << ".\n";
        }
        else
        {
            valid = true;
        }
    } while (!valid);

    return value;
}

std::string UserInput::getString(const std::string &prompt, bool alphaOnly)
{
    std::string input;
    bool valid = false;

    do
    {
        std::cout << prompt;
        std::getline(std::cin, input);

        if (input.empty())
        {
            std::cout << "Error: Input cannot be empty.\n";
            continue;
        }

        if (alphaOnly)
        {
            valid = true;
            for (char c : input)
            {
                if (!std::isalpha(c) && !std::isspace(c))
                {
                    valid = false;
                    std::cout << "Error: Input must contain only alphabetic characters.\n";
                    break;
                }
            }
        }
        else
        {
            valid = true;
        }
    } while (!valid);

    return input;
}

bool UserInput::getYesNo(const std::string &prompt)
{
    char input;
    bool valid = false;

    do
    {
        std::cout << prompt << " (y/n): ";
        std::cin >> input;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        input = std::tolower(input);
        if (input == 'y' || input == 'n')
        {
            valid = true;
        }
        else
        {
            std::cout << "Error: Please enter 'y' or 'n'.\n";
        }
    } while (!valid);

    return (input == 'y');
}

void UserInput::pressEnterToContinue(const std::string &message)
{
    std::cout << message;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}