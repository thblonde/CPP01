#include "Harl.h"

int main(int argc, char *argv[])
{
  Harl instance;

  if (argc != 2) {
    std::cout << "Error" << std::endl;
    return 1;
  }

  std::string level(argv[1]);
  int x(0);
  if (level == "DEBUG")
    x = 1;
  else if (level == "INFO")
    x = 2;
  else if (level == "WARNING")
    x = 3;
  else if (level == "ERROR")
    x = 4;

  switch (x) {
    case 1:
      std::cout << "[ " << level << " ]" << std::endl;
      instance.complain("debug");
      std::cout << "[ " << "INFO" << " ]" << std::endl;
      instance.complain("info");
      std::cout << "[ " << "WARNING" << " ]" << std::endl;
      instance.complain("warning");
      std::cout << "[ " << "ERROR" << " ]" << std::endl;
      instance.complain("error");
      break;
    case 2:
      std::cout << "[ " << level << " ]" << std::endl;
      instance.complain("info");
      std::cout << "[ " << "WARNING" << " ]" << std::endl;
      instance.complain("warning");
      std::cout << "[ " << "ERROR" << " ]" << std::endl;
      instance.complain("error");
      break;
    case 3:
      std::cout << "[ " << level << " ]" << std::endl;
      instance.complain("warning");
      std::cout << "[ " << "ERROR" << " ]" << std::endl;
      instance.complain("error");
      break;
    case 4:
      std::cout << "[ " << level << " ]" << std::endl;
      instance.complain("error");
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;

    return 0;
  }
}
