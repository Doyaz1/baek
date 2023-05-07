#include <iostream>

int main(){

int hour, minute;

std::cin >> hour >> minute;

if (minute - 45 < 0){

  if (hour == 0)
  {
    hour = 23;
    minute = 60 - (45 - minute);
  }

  else
  {
    hour = hour - 1;
    minute = 60 - (45 - minute);
  }
}
else
{
  minute = minute - 45;
}
std::cout << hour << " " << minute;
return 0;
}
