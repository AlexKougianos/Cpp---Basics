#include <iostream>

using namespace std;

class point {
  double x,y;

  public:
    point();
    point(double in_x, double in_y);
    double set_x(double in_x);
    double set_y(double in_y);
    void print_point(char p) const;
};

int main (void){
  point a, b, c;

  a.set_x(9);
  a.set_y(0.3);

  b.set_x(3.543);
  b.set_y(189.0);

  c.set_x(19.6);
  c.set_y(68);

  a.print_point('a');
  b.print_point('b');
  c.print_point('c');
}

point::point() {
  x = 0;
  y = 0;
  cout << "Initializing point" << endl;
}

point::point(double in_x, double in_y) {
  x = in_x;
  y = in_y;
}

double point::set_x(double in_x) {
  x = in_x;
}

double point::set_y(double in_y) {
  y = in_y;
}

void point::print_point(char p) const{
  cout << "point " << p << " is: (" << x << ", " << y << ")"<< endl;
}
