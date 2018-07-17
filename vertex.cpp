#include <iostream>
/*#include <stdlib.h> */

using namespace std;

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    cout << "\nUsage: ./vertice_file --filename=___.txt --amt=int" << endl;
    return -1;
  }
  char *name;
  name = &argv[1][11];
  cout << "File will be named: " << name << endl;

  int num = atoi(&argv[2][6]);

  FILE * fp;
  fp = fopen (name, "w");

  for(int i=0; i<num; i++)
  {
    int x = rand()%21-10;
    int y = rand()%21-10;
    fprintf(fp, "x=%d,y=%d\n", x, y);
  }

  fclose(fp);


  return 0;
}
