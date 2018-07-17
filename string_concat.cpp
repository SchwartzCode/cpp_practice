#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  string cabbage = "";
  for (int i=0; i<argc; i++)
  {
    cabbage +=argv[i];
  }

  cout << cabbage << endl;
}
