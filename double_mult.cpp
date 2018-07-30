#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
  if (argc == 3)
  {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    for (int i=1;i<=a;i++)
    {
      for(int j=1;j<=b;j++)
        printf("%d\t", i*j);
    
      printf("\n");
    }
  return 0; 
  }
  else{printf("ERROR: This executable requires two integers.\n");}
}
