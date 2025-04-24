#ifndef MAIN_H
#define MAIN_H

#include <string>

/**
 * @brief Main application controller class
 */
class MainApp
{
public:
    /**
     * @brief Main application flow
     * @return 0 on success
     */
    int run();

private:
    std::string username;
    int choice;
};

#endif // MAIN_H