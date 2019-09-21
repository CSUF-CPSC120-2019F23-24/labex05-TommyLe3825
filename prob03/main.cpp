// Random Rectangle

#include <iostream>
#include <ctime> //needed for time ()
#include <cstdlib>

int main ()
{
  const int max = 40; //the maximum for length/base of rectangle
  const int height = 3; // the constant height
  double length; //random length
  unsigned hope = time (0); //time is very random
  srand (hope);

  length=rand() % max+1; //it creates a random length

  std::string sign;
  sign.assign(length,'#'); //makes as many '#' according to the value of the length

  std::cout<< sign << std::endl; //length of rectangle is constant for all
  std::cout<< sign << std::endl; // the height is 3 so there is 3 cout
  std::cout<< sign << std::endl;

  return 0;
}
