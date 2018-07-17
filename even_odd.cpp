#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int result = 1;
  while(result != 0)
  {
    int input = 0;
    printf("Enter a number: ");
    scanf("%d", &input);
    result = input%2;

  if (result == 1)
    {printf("The number %d is odd.\n", input);}
  else {printf("The number %d is even! Goodbye.\n", input);}
  }

  printf("Escaped the loop.\n");
  return 0;
}
