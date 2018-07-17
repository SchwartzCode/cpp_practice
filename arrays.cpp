#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc==1)
  {
    cout << "Usage: ./arrays INT INT INT...\n";
  }
  else
  {
    cout << "Number of integers provided: " << argc << "\n";

    for (int i=1;i<argc;i++)
      cout << "numbers[" << i-1 << "]: " << argv[i] << "\n";

    return 100;
  }
}
