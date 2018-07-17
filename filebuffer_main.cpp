#include "filebuffer.h"

using namespace std;

int main(int argc, char **argv)
{
  
  if (argc!=2)
  {
    cout << "Usage: ./filebuffer_main --filename=___.txt" << endl;
    return -1;
  }

  char *name = &argv[1][11];
  cout << "File is named: " << name << endl;

  vector<string> words = vectorize(name);

  for(int i=0; i<words.size(); i++)
  {
    if(words[i] == "")
      cout << "line: Empty!" << endl;
    else
      cout << "line: [" << words[i] << "]\n";
  }
  cout << words.size() << endl;
  return 0;
}
