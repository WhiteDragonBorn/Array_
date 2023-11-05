#include "OrArray.h"

OrArray* OrArray::sum(const Array& other) const {
  std::set<data_t> set1;
  std::set<data_t> set2;

  for (size_t i = 0; i < size_; i++) {
    set1.insert(arr[i]);
  }

  for (size_t i = 0; i < other.size(); i++) {
    set1.insert(other.data()[i]);
  }

  OrArray* ptr = new OrArray(set1.size());
  int i = 0;
  for (auto& t : set1) {
    (*ptr)[i] = t;
    i++;
  }
  return ptr;
}

void OrArray::foreach () {
  for (size_t i = 0; i < size_; i++) {
    arr[i] = (data_t)log2(arr[i]);
  }
}