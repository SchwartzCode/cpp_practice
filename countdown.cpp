#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int start;
  printf("Enter the starting number: ");
  scanf("%d", &start);

  for (int i = start; i>0; i--)
  {
    printf("%d...\n", i);
  }

  printf("FIRE!!!\n");
}
