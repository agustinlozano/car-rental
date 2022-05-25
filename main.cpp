#include "rental.h"

using namespace std;

int main() {
  welcome obj1;  // object created for welcome class
  obj1.welcum(); // welcum function is called
  rent obj2;
  // object created for rent class and further member functions are called
  obj2.data();
  obj2.calculate();
  obj2.showrent();

  return 0;
}
