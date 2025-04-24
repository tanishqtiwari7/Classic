#include "../../include/maths.h"
#include "../../include/user_input.h"
#include <iostream>
#include <limits>

Mathematics::Mathematics(const std::string &username) : username(username) {}

int Mathematics::showMenu()
{
    std::cout << "\n\t********************** Hey " << username << " **********************\n\n";
    std::cout << "\t************* Welcome to the Mathematics Program ***********\n";

    while (true)
    {
        std::cout << "\nChoose one from the following:\n\n";
        std::cout << "1. Geometry\n";
        std::cout << "2. Matrix\n";
        std::cout << "3. Return to Main Menu\n";

        int choice = UserInput::getInteger("Your choice: ", 1, 3);

        switch (choice)
        {
        case 1:
            geometry();
            break;
        case 2:
            matrix();
            break;
        case 3:
            return 0;
        }
    }

    return 0;
}

void Mathematics::geometry()
{
    std::cout << "\n----- GEOMETRY TOOLS -----\n";

    double radius, side, length, width, base, height;
    const double PI = 3.14159265358979323846;

    while (true)
    {
        std::cout << "\nSelect a shape:\n";
        std::cout << "1. Circle\n";
        std::cout << "2. Square\n";
        std::cout << "3. Rectangle\n";
        std::cout << "4. Triangle\n";
        std::cout << "5. Return to Mathematics Menu\n";

        int choice = UserInput::getInteger("Your choice: ", 1, 5);

        switch (choice)
        {
        case 1: // Circle
            radius = UserInput::getInteger("Enter radius: ", 1, 1000);
            std::cout << "Circle area: " << PI * radius * radius << std::endl;
            std::cout << "Circle circumference: " << 2 * PI * radius << std::endl;
            UserInput::pressEnterToContinue();
            break;

        case 2: // Square
            side = UserInput::getInteger("Enter side length: ", 1, 1000);
            std::cout << "Square area: " << side * side << std::endl;
            std::cout << "Square perimeter: " << 4 * side << std::endl;
            UserInput::pressEnterToContinue();
            break;

        case 3: // Rectangle
            length = UserInput::getInteger("Enter length: ", 1, 1000);
            width = UserInput::getInteger("Enter width: ", 1, 1000);
            std::cout << "Rectangle area: " << length * width << std::endl;
            std::cout << "Rectangle perimeter: " << 2 * (length + width) << std::endl;
            UserInput::pressEnterToContinue();
            break;

        case 4: // Triangle
            base = UserInput::getInteger("Enter base: ", 1, 1000);
            height = UserInput::getInteger("Enter height: ", 1, 1000);
            std::cout << "Triangle area: " << 0.5 * base * height << std::endl;
            UserInput::pressEnterToContinue();
            break;

        case 5: // Return
            return;
        }
    }
}

void Mathematics::matrix()
{
    std::cout << "\n----- MATRIX OPERATIONS -----\n";

    while (true)
    {
        std::cout << "\nSelect operation:\n";
        std::cout << "1. Matrix Addition\n";
        std::cout << "2. Matrix Multiplication\n";
        std::cout << "3. Matrix Transpose\n";
        std::cout << "4. Return to Mathematics Menu\n";

        int choice = UserInput::getInteger("Your choice: ", 1, 4);

        switch (choice)
        {
        case 1:
        { // Addition
            int rows = UserInput::getInteger("Enter number of rows (max 10): ", 1, 10);
            int cols = UserInput::getInteger("Enter number of columns (max 10): ", 1, 10);

            int A[10][10], B[10][10], C[10][10];

            std::cout << "Enter elements of first matrix:\n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    std::cout << "A[" << i << "][" << j << "]: ";
                    std::cin >> A[i][j];
                }
            }

            std::cout << "Enter elements of second matrix:\n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    std::cout << "B[" << i << "][" << j << "]: ";
                    std::cin >> B[i][j];
                }
            }

            // Addition
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }

            std::cout << "Result of addition:\n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    std::cout << C[i][j] << " ";
                }
                std::cout << std::endl;
            }
            UserInput::pressEnterToContinue();
            break;
        }

        case 2:
        { // Multiplication
            int rowsA = UserInput::getInteger("Enter number of rows for matrix A (max 10): ", 1, 10);
            int colsA = UserInput::getInteger("Enter number of columns for matrix A (max 10): ", 1, 10);
            int rowsB = colsA; // Must be same as colsA for multiplication
            int colsB = UserInput::getInteger("Enter number of columns for matrix B (max 10): ", 1, 10);

            int A[10][10], B[10][10], C[10][10] = {0};

            std::cout << "Enter elements of first matrix (A):\n";
            for (int i = 0; i < rowsA; i++)
            {
                for (int j = 0; j < colsA; j++)
                {
                    std::cout << "A[" << i << "][" << j << "]: ";
                    std::cin >> A[i][j];
                }
            }

            std::cout << "Enter elements of second matrix (B):\n";
            for (int i = 0; i < rowsB; i++)
            {
                for (int j = 0; j < colsB; j++)
                {
                    std::cout << "B[" << i << "][" << j << "]: ";
                    std::cin >> B[i][j];
                }
            }

            // Matrix multiplication
            for (int i = 0; i < rowsA; i++)
            {
                for (int j = 0; j < colsB; j++)
                {
                    for (int k = 0; k < colsA; k++)
                    {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            std::cout << "Result of multiplication:\n";
            for (int i = 0; i < rowsA; i++)
            {
                for (int j = 0; j < colsB; j++)
                {
                    std::cout << C[i][j] << " ";
                }
                std::cout << std::endl;
            }
            UserInput::pressEnterToContinue();
            break;
        }

        case 3:
        { // Transpose
            int rows = UserInput::getInteger("Enter number of rows (max 10): ", 1, 10);
            int cols = UserInput::getInteger("Enter number of columns (max 10): ", 1, 10);

            int A[10][10], T[10][10];

            std::cout << "Enter elements of the matrix:\n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    std::cout << "A[" << i << "][" << j << "]: ";
                    std::cin >> A[i][j];
                }
            }

            // Transpose
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    T[j][i] = A[i][j];
                }
            }

            std::cout << "Result of transpose:\n";
            for (int i = 0; i < cols; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    std::cout << T[i][j] << " ";
                }
                std::cout << std::endl;
            }
            UserInput::pressEnterToContinue();
            break;
        }

        case 4: // Return
            return;
        }
    }
}