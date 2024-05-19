#include <iostream>
// #include "ropasciss.cpp"
// #include "spinnin.cpp"

class Games
{
public:
    std::string D;
    int x;
    int games()
    {
        std::cout << "\n\t********************** Hey " << D << " **********************\n\n";
        std::cout << "\t************* welcome to the games program ***********\n";

        do
        {
            std::cout << "\nChoose one from the following :- \n\n";

            std::cout << "1. Rock Papper Scissors\n";
            std::cout << "2. Spinnin\n";

            std::cin >> x;

            if ((x == 1) || (x == 2))
            {

                if (x == 1)
                {
                    std::cout<<"hii";
                    
                    // ropasciss obj;
                    // obj.userin();
                    // obj.comp();
                    // obj.main();
                }

                else if (x == 2)
                {
                    std::cout<<"bye";
                    // spinnin obj;
                    // obj.main();
                }
            }

            else
            {

                std::cout << "\nEnter the correct no:-\n\n";
            }
        } while ((x != 1) && (x != 2));
    }
};
