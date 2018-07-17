#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  vector<string> test;

  test.push_back("a");
  test.push_back("b");
  test.push_back("c");
  test.push_back("d");
  test.push_back("e");


  vector<string> answer(test.begin()+1, test.end()-1);

  for (int a=0; a<answer.size(); a++)
    cout << a << ": " << answer[a] << endl;

  return 0;
}
