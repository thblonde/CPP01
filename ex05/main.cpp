#include "Harl.h"

int main()
{
  Harl instance;

  instance.complain("debug");
  instance.complain("info");
  instance.complain("warning");
  instance.complain("error");
  return 0;
}
