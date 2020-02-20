#include <iostream>

using namespace std;

class my_array {
  public:
    my_array();
    my_array(int in_int);
    ~my_array();
    int set_i(int i, int val);
 //   void get_i() const;
    void print_ar() const;
  private:
    int *ar_ptr, ar_size;
};


int main (void) {
  int i, size = 10;
  my_array arr(size);

  for (i=0; i<size; i++) {
    arr.set_i(i, (i+3)*3);
  }
  arr.print_ar();

  return 0;
}


my_array::my_array() {
  ar_ptr = new int [5];
  if (!ar_ptr)
    cout<<"error allocating memory";
}


my_array::my_array(int in_int) {
  ar_size = in_int;
  ar_ptr = new int [ar_size];
  if (!ar_ptr)
    cout<<"error allocating memory";
}


my_array::~my_array() {
  delete [] ar_ptr;
}


int my_array::set_i(int i, int val) {
  if (i>=0 && i<ar_size) {
    ar_ptr[i] = val;
  }
  else
    cout<<"Error: out of bounds"<<endl;
}

void my_array::print_ar() const {
  int i=0;

  for (i; i<ar_size; i++) {
    cout<<i+1<<": "<<ar_ptr[i]<<endl;
  }
}
