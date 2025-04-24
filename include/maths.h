#ifndef MATHS_H
#define MATHS_H

#include <string>

/**
 * @brief Class for mathematical operations and tools
 */
class Mathematics
{
public:
    /**
     * @brief Constructor
     * @param username User's name
     */
    Mathematics(const std::string &username);

    /**
     * @brief Show the mathematics menu
     * @return 0 on success
     */
    int showMenu();

private:
    std::string username;

    /**
     * @brief Geometry tools
     */
    void geometry();

    /**
     * @brief Matrix operations
     */
    void matrix();
};

#endif // MATHS_H