#include <iostream>
#include <stdlib.h>

using namespace std;
bool caps = false;


int main(int argc, char **argv, bool& capital)
{
  string input;  

  if (argc > 2)
  {
    cout << "Usage: ./hellocmd 'my string'\n";
    return 0;
  }
  else if (argc == 1)
  {
    input = "Hello there. How are things?";
  }
  else {input = argv[1];}

  int leng = input.length();
  
  cout << input << endl;

  if (leng>10)
    printf("Holy canoli that's a big string!\n");
  else {printf("That's a lame string.\n");}

  if (isupper(input[0]))
      {capital = true;}


  if (capital)
    cout << "The string is properly capitalized." << endl;
  else 
    cout << "The string is NOT properly capitalized." << endl;
  return 50;
}
