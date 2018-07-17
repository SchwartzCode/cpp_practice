#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    cout << "\n\tUsage: ./string_split string" << endl;
    return -1;
  }
  string str = argv[1];

  size_t eq_index = str.find('=');
  if (eq_index == string::npos)
  {
    cout << "front: [" << str << "]\n";
    cout << "back: []\n";
    return 0;
  }

  cout << "front: [" << str.substr(0,eq_index) << "]\n";
  cout << "back: [" << str.substr(eq_index+1) << "]\n";

  return 0;
}
