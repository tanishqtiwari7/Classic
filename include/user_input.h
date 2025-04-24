#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <string>

/**
 * @brief Class for handling and validating user input
 */
class UserInput
{
public:
    /**
     * @brief Get integer input with validation
     * @param prompt Message to display to user
     * @param min Minimum valid value
     * @param max Maximum valid value
     * @return Valid integer input
     */
    static int getInteger(const std::string &prompt, int min, int max);

    /**
     * @brief Get string input with validation
     * @param prompt Message to display to user
     * @param alphaOnly Whether to accept only alphabetic characters
     * @return Valid string input
     */
    static std::string getString(const std::string &prompt, bool alphaOnly = false);

    /**
     * @brief Get yes/no input from user
     * @param prompt Message to display to user
     * @return true for yes, false for no
     */
    static bool getYesNo(const std::string &prompt);

    /**
     * @brief Wait for user to press Enter
     * @param message Optional message to display
     */
    static void pressEnterToContinue(const std::string &message = "Press Enter to continue...");
};

#endif // USER_INPUT_H