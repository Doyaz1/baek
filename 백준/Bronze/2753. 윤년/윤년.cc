#include <iostream>

int main() 
{
  int year;
  bool divBy400, divBy4, divBy100;
  bool leapyear;

  std::cin >> year;

  divBy400 = ((year % 400) == 0);
  divBy4 = ((year % 4) == 0);
  divBy100 = ((year % 100) == 0);
  leapyear = (divBy400) || (divBy4 && !(divBy100));
  
  if(leapyear)
  {
    std::cout << '1';
  }
  else
  {
    std::cout << '0';
  }
  return 0;
}  