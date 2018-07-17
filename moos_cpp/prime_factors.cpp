#include <iostream>
#include <vector>
#include <math.h>
#include <cstdint>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc != 2) {
    cout << "\n\tUsage: ./prime_factors [int]" << endl;
    return -1;
  }

  int input = stoi(argv[1]);

  string output = "";
  cout << "Primes of " << argv[1] << " are: ";


  while (input > 1) {
    for (int i =2; i<=input; i++)
    {
      if (i > sqrt(input)) {
        output += to_string(input) + "\n";
        input = 1;
        break;
      } else if (input%i==0) {
        output += to_string(i) + ":";
        input = input/i;
        break;
    }
  }
  } 

  cout << output << endl;
  return 0;
}
