#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
  if (argc != 4) {
    printf("ERROR: Wrong number of arguments.\n");
    printf("USAGE: ./sort [num] [min] [max]\n");
    return -1;
  }

  int size = atoi(argv[1]);
  int min  = atoi(argv[2]);
  int max  = atoi(argv[3]);
  vector<int> generated;

  cout << "\nUnsorted vector: \n";

  for (int i=0; i<size; i++) {
    generated.push_back(min + rand()%(max-min));
    cout << generated[i] << " ";

    if ((i+1)%10==0)
      cout <<endl;
  }
  
  cout << endl << "Sorted Vector: \n";;
  
  int unsorted=size;
  //instead of generating a vector of ints, parse the strings for x coords ^
  
  //the sorting bit

  while (unsorted>1) {
      int maxdex = 0;
      int max = generated[0];
    for (int j=0; j<unsorted; j++) {
          if (generated[j] > max) {
            max = generated[j];
            maxdex = j;
          }
      }
      //literally just copy these two lines for the vector of strings and it'll
      //be one tasty situation
      generated[maxdex] = generated[unsorted-1];
      generated[unsorted-1] = max;
      unsorted--;
  }
  
  for (int k=0; k<size; k++) {
    cout << generated[k] << " ";

    if ((k+1)%10==0)
      cout << endl;
  }
  
  return 0;
}
