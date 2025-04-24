#include "../include/main.h"
#include "../include/username.h"
#include "../include/games.h"
#include "../include/maths.h"
#include "../include/user_input.h"
#include <iostream>
#include <string>
#include <limits>

int MainApp::run()
{
    // Show welcome message
    Username usernameHandler;
    usernameHandler.promptUser();

    // Get valid username (alphabetic characters only)
    username = UserInput::getString("Enter the username: ", true);

    std::cout << "\nWelcome, " << username << "!\n";

    // Main program loop
    while (true)
    {
        std::cout << "\nChoose one from the following: \n\n";
        std::cout << "1. Mathematics Program\n";
        std::cout << "2. Games\n";
        std::cout << "3. Exit Program\n";

        choice = UserInput::getInteger("Your choice: ", 1, 3);

        switch (choice)
        {
        case 1:
        {
            Mathematics mathApp(username);
            mathApp.showMenu();
            break;
        }
        case 2:
        {
            Games gamesApp(username);
            gamesApp.showMenu();
            break;
        }
        case 3:
            std::cout << "\nThank you for using our program, " << username << "! Goodbye!\n";
            return 0;
        }
    }

    return 0;
}

// Program entry point
int main()
{
    MainApp app;
    return app.run();
}