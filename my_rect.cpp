// classes example
#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    int width, height;
    string color;
  public:
    void set_values (int,int);
    void set_color (string);
    int area() {return width*height;}
    void print_info();
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

void Rectangle::set_color (string c)
{
  color = c;
}

void Rectangle::print_info()
{
  cout << "Area: " << area() << endl;
  cout << "Color: " << color << endl;
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  rect.set_color("Yellow");

  rect.print_info();
  return 0;
}
