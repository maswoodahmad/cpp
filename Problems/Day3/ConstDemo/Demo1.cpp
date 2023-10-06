#include <iostream>
#include "/workspaces/cpp/Problems/Day3/ScenarioD/Vehicle.h"

/*
rules for the const
Rule 1: const is applied to the 'token' on its immediate left
if there is nothing on the left it will apply to its immediate right
Rule 2 while working with pointers, trear * symbol as token
 const int * ptr;
here int and * are separate tokens


use case 1: with varibles of primitive types which are not pointers
*/
void Demo()
{

  // n1 is the constant integer
  int n1 = 10; // n1 is now immutable, it can't be changed once intialized
  int n2 = 50;
  const int *ptr = &n1;
  int const *ptr = &n1; // both the lines are same

  ptr = &n1;
  // ptr is pointing to constant integer
  // since int part is contstant we cannot use pointet to change n1's value

  //*ptr = 100;

  // its not allowed means constant integre value can't be changed
  ptr = &n2; // its allowed js ce pointer itself is not constant it conttent can be changed
  // grade is the constant char
  const char grade = 'A';

  std::cout << n1 << "\t" << grade << std::endl;
  // n1=20; // error not allowed
  //
}
int main()
{

  Demo();
}