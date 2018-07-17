#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
  string search_pattern;

  for (int i=1; i<argc; i++)
  {
    string argi = argv[i];

    if (argi.find("--search=") == 0)
      {
        search_pattern = argi.substr(9);
        cout << "Pattern identified: " <<  search_pattern << endl;
      }
  }

  bool found = false;
  for (int j=1; j<argc; j++)
  {
    string argj = argv[j];

    if(argj.find("--search=") != 0)
    {
      if(argj == search_pattern)
        found=true;
    }
  }

  if(found)
    printf("The string was found!\n");
  else {printf("The string wasn't found :(\n");}

  return 0;
}
