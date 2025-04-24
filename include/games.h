#ifndef GAMES_H
#define GAMES_H

#include <string>

/**
 * @brief Class for managing games functionality
 */
class Games
{
public:
    /**
     * @brief Constructor
     * @param username User's name
     */
    Games(const std::string &username);

    /**
     * @brief Main games menu
     * @return 0 on success
     */
    int showMenu();

private:
    std::string username;

    /**
     * @brief Rock Paper Scissors game
     */
    void rockPaperScissors();

    /**
     * @brief Spinning game
     */
    void spinning();
};

#endif // GAMES_H