#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  if (argc==1)
  {
    cout << "Usage: ./arrays INT INT INT...\n";
    return 0;
  }
  else
  {
    cout << "Number of integers provided: " << argc-1 << "\n";
    int array[argc-1];
    for (int i=1;i<argc;i++)
    {
      cout << "numbers[" << i-1 << "]: " << argv[i] << "\n";
      array[i-1]=atoi(argv[i]);
    }
    int smallest = array[0];
    int smalldex=0;
      
    for (int j=1;j<argc-1;j++)
    {
      if (array[j]<smallest)
      {
        smallest = array[j];
        smalldex=j;
      }
    }
  cout << "\nSmallest value: " << smallest << endl;
  cout << "Smalldex: " << smalldex << endl;


  int newarray[argc-2];
  bool hit_small = false;
  int curr_index = 0;

  for (int k=0; k<argc-1; k++)
  {
    if(k == smalldex && !hit_small)
      hit_small = true;
    else {
      newarray[curr_index] = array[k];
      curr_index++;
    }
  }

  cout << "\nNEW ARRAY:" << endl;
  
  for (int p=0; p<argc-2; p++)
    cout << "new_array[" << p << "]: " << newarray[p] << endl;

  return 100;
  }


}
