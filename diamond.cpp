// derived classes
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b;}
 };

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
 };

class Triangle: public Polygon {
  public:
    int area ()
      { return width * height / 2; }
  };

class Diamond: public Polygon {
  public:
    int area()
    { return width * height / 4; }
};

int main () {
  Rectangle rect;
  Triangle trgl;
  Diamond dmnd;
  rect.set_values (4,5);
  trgl.set_values (4,5);
  dmnd.set_values(4,5);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  cout << dmnd.area() << endl; /* oh yes I did */
  return 0;
}
