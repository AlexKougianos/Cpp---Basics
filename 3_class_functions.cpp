#include <iostream>

using namespace std;

class dummy {
  public:
    dummy();
    dummy(int in_x);
    ~dummy();
    int set_x(int in_x);
    void get_x() const;

  private:
    int x;
};

dummy::dummy() {
  x = 0;
  cout << "initialize x to 0" << endl;
}

dummy::dummy(int in_x) {
  cout << "initialize x to 10" << endl;
  x = in_x;
}

dummy::~dummy() {
  cout << "destruction of x = " << x << endl;
}

int dummy::set_x(int in_x) {
  x = in_x;
  cout << "setting x to: " << in_x << endl;
}

void dummy::get_x() const{
  cout << "x is: " << x << endl;
}

int main(void) {
  dummy a, b(10);
  a.set_x(15);
  b.get_x();

  return 0;
}
