#include <array>

#include "AndArray.h"
#include "Array.h"
#include "OrArray.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
  Array* arr[4];
  arr[0] = new AndArray(8);
  arr[1] = new OrArray(7);
  arr[2] = new AndArray(7);
  arr[3] = new OrArray(6);

  cout << *arr[0] << *arr[1] << *arr[2] << *arr[3];

  // arr[0]->foreach ();
  // arr[1]->foreach ();
  Array* intr_temp = arr[0]->sum(*arr[2]);

  Array* merg_temp = arr[1]->sum(*arr[3]);

  cout << endl << *intr_temp;

  delete arr[0];
  delete arr[1];
}
