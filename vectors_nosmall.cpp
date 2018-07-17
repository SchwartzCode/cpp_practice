#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  if (argc<2)
  {
    perror("Usage: ./vectors_nosmall int int int...\n");
    return -1;
  }
  
  cout << "Total number of integers provided: " << argc-1 << endl;

  int num_args = argc-1;
  vector<int> numbers;

  for(int i=1;i<argc;i++)
  {
    numbers.push_back(atoi(argv[i]));
    cout << "\tnumbers[" << i-1 << "]: " << argv[i] << endl;
  }
  
  int smallest = numbers[0];

  for(int j=1; j<numbers.size(); j++)
  {
    if(numbers[j]<smallest)
      smallest = numbers[j];
  }

  vector<int> no_small;
  bool hitsmall = false;
  int index = 0;
  
  cout << "\nNumbers with smallest removed:" << endl;

  for(int k=0; k<numbers.size(); k++)
  {
    if(numbers[k]==smallest)
      hitsmall=true;
    else {no_small.push_back(numbers[k]);
          cout << "\tnumbers[" << index << "]: " << numbers[k] << endl;
      index++;
    }

  }


  return 0;
}
