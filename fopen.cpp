#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc<3)
  {
    cout << "Usage: ./fopen --filename=___.txt string string string..." << endl;
    return 0;
  }
  
  char *name;
  name = &argv[1][11];
  cout << "File will be named: " << name << endl; 

  int args = argc-2;
  char *input[args];


  for(int i=0;i<args;i++)
  {
    input[i]=argv[i+2];
  }


  FILE * fp;
  fp = fopen (name, "w");

  for (int j=0; j<args; j++)
    fprintf(fp, "%s\n", input[j]);

  fclose(fp);

  return 0;
}
