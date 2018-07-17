#include <iostream>
#include "filebuffer.h"

using namespace std;

vector<string> vectorize(char *name)
{  
  FILE * fp;
  fp = fopen(name, "r");
  vector<string> lines;

  if(fp==NULL)
  {
    perror("Error in opening file");
    return(lines);
  }
   
  string storage;

  while(1) {
    int c_int=fgetc(fp);
    char c = (char) c_int;
    if(feof(fp)) {
      lines.push_back(storage);
      break;
    }
    else if(c == '\n') {
      lines.push_back(storage);
      storage.clear();
    }
    else
      storage.push_back(c);
  }


  fclose(fp);

  return lines;
}
