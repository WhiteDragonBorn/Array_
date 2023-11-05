#include "AndArray.h"

AndArray* AndArray::sum(const Array& other) const {
  std::set<data_t> set1;
  std::set<data_t> set2;

  for (size_t i = 0; i < size_; i++) {
    set1.insert(arr[i]);
  }
  //std::cout << "set1: ";
  //for (auto& t : set1) {
  //  std::cout << t;
  //}
  //std::cout << std::endl << "set1_new: ";

  for (size_t i = 0; i < other.size(); i++) {
    set2.insert(other.data()[i]);
  }

  //for (auto& t : set1) {
  //  std::cout << t;
  //}
  std::set<data_t> temp;
  std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
    std::inserter(temp, temp.begin()));

  AndArray* ptr = new AndArray(temp.size());
  int i = 0;
  for (auto& t : temp) {
    (*ptr)[i] = t;
    i++;
  }
  return ptr;
}

void AndArray::foreach () {
  for (size_t i = 0; i < size_; i++) {
    arr[i] = (data_t)sqrt(arr[i]);
  }
}
