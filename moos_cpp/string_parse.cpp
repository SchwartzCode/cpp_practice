#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
  string input = "x=15.6345737,y=20.17852,id=134574";

  string x = input.substr(input.find("x=")+2, input.find(",y=")-(input.find("x=")+2));
  double x_pos = stod(x);

  string y = input.substr(input.find("y=")+2, input.find(",id=")-(input.find("y=")+2));
  double y_pos = stod(y);

  string id = input.substr(input.find("id=")+3);
  int id_num = stoi(id);

  cout << "X: " << x_pos << "\tY: " << y_pos << "\tID Number: " << id_num << endl;

  return 0;
}
