#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: ./cmd_factorial NUMBER\n");
  }
  else
  {
  
  int input = atoi(argv[1]);
  int product = 1;

  for (int i=input; i>0; i--)
  {
    product = product * i;
  }

  printf("Calculating the factorial of %d: \n", input);
  printf("%d\n", product);

  return 0;
}
}
/*I messed up the tabs, I know*/
