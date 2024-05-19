#include <iostream>
// #include "add.cpp"
// #include "hello.cpp"

class mat
{
public:
    std::string D;
    int x;
    int mats()
    {
        std::cout << "\n\t********************** Hey " << D << " **********************\n\n";
        std::cout << "\t************* welcome to the maths program ***********\n";

        do
        {
            std::cout << "\nChoose one from the following :- \n\n";

            std::cout << "1. Geometry\n";
            std::cout << "2. Matrix\n";

            std::cin >> x;

            if ((x == 1) || (x == 2))
            {

                if (x == 1)
                {
                    std::cout<<"CIRCLE";
                    

                
                }

                else if (x == 2)
                {
                
                    std::cout<<"MATRIX";
                    
                }
            }

            else
            {

                std::cout << "\nEnter the correct no:-\n\n";
            }
        } while ((x != 1) && (x != 2));
    }
};

