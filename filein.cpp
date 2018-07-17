#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc!=2)
  {
    cout << "Usage: ./filein --filename=___.txt" << endl;
    return -1;
  }
  
  char *name;
  name = &argv[1][11];
  cout << "File is named: " << name << endl;


  FILE * fp;
  fp = fopen(name, "r");

  if(fp==NULL)
  {
    perror("Error in opening file");
    return(-1);
  }

  int c;

  while(1) {
    c=fgetc(fp);
    if(feof(fp))
        break;
    printf("%c", c);
  }


  fclose(fp);

  return 0;
}
