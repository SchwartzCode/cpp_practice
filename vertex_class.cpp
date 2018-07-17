#include <iostream>
/*#include <stdlib.h> */
#include <string>
#include <stdio.h>

using namespace std;

class vertex {
public:
  int x;
  int y;

  void set_coords(int a, int b)
  {
    x=a;
    y=b;
  }
  const char *print_coords()
  {
    string coords =  "(" + to_string(x) + "," + to_string(y) + ")";
    const char *right = coords.c_str();
    return right;
  }
};


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
    vertex a;
    a.set_coords(rand()%21-10, rand()%21-10);
    const char *point = a.print_coords();
    fprintf(fp, "%s", point);
    fprintf(fp, "\n");
  }

  fclose(fp);


  return 0;
}
