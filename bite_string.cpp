#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<string> biteString(string str, char c);

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    cout << "\n\tUsage: ./bite_string 'string' 'char'\n";
    cout << "The program will split the string into a vector of strings," << endl;
    cout << "parsing at each appearance of the specified character." << endl;
    return -1;
  }
  
  char *input = argv[1];
  char *car = argv[2];
  char splicer = car[0]; /*Guessing this is a very roundabout way of doing this */

  vector<string> output = biteString(input, splicer);

  int length = output.size();

  cout << "\nParsed String: \n";
  for(int i=0; i<length; i++)
    cout << "\t" << output[i] << endl;

  return 0;
}

vector<string> biteString(string str, char c)
{
  vector<string> storage;
  int index = 0;

  while(1)
  {
    size_t outdex = str.find(c, index);

    if(outdex == string::npos)
    {
      storage.push_back(str.substr(index));
      break;
    }
    else {
      storage.push_back(str.substr(index, outdex-index));
      index = outdex+1;
    }

  }

  return storage;
}
