#include <iostream>
#include "userin.cpp"
#include "games.cpp"
#include "maths.cpp"
// #include "username.cpp"

class MAIN
{
public:
  std::string X;
  int x;

  const std::string G = X;

  int Main()
  {
    Username obj;
    obj.user();

    std::cin >> X;

    do
    {
      std::cout << "\nChoose one from the following :- \n\n";

      std::cout << "1. Maths Program:-\n";
      std::cout << "2. Games:-\n";

      std::cin >> x;

      if ((x == 1) || (x == 2))
      {

        if (x == 1)
        {

          mat obj;
          obj.D = X;
          obj.mats();
        }

        else if (x == 2)
        {
          Games obj;
          obj.D = X;
          obj.games();
        }
      }

      else
      {

        std::cout << "\nEnter the correct no:-\n\n";
      }
    } while ((x != 1) && (x != 2));
  }
};

int main()
{
  MAIN Obj;
  Obj.Main();
}
