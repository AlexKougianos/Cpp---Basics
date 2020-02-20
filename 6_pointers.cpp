#include <iostream>

using namespace std;

int main (void) {
  int x, *p, **pp;

  x = 10;
  p = &x;
  pp = &p;

  cout<<"x= "<<x<<"(adress: "<<&x<<")"<<endl;
  cout<<"p= "<<p<<"(adress: "<<&p<<")"<<endl;
  cout<<"pp= "<<pp<<endl<<"x= "<<**pp;
}
