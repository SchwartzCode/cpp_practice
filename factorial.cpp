#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  printf("Enter an integer whose factorial you'd like to now: ");
  int input = 0;
  scanf("%d", &input);

  int product = 1;
  long int prod = 1;

  for (int i=input; i>0; i--)
  {
    product = product * i;
    prod = prod * i;
  }

  printf("Calculating the factorial of %d: \n", input);
  printf("Int: %d\n", product);
  printf("Long Int: %ld \n", prod);

  return 0;
}
