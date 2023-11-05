#include "Array.h"

//void Array::sum() {}

Array::Array(const Array& other) : size_(other.size_) {
  arr = new data_t[size_];
  for (size_t i = 0; i < size_; i++) {
    arr[i] = other.arr[i];
  }
}

Array& Array::operator=(const Array& other) {
  if (this == &other) return *this;
  if (size_ == other.size_) {
    delete[] arr;
    arr = new data_t[size_];
    for (size_t i = 0; i < size_; i++) {
      arr[i] = other.arr[i];
    }
    return *this;
  }
  else {
    throw("bad!");
  }
}

std::ostream& operator<<(std::ostream& os, const Array& obj) {
  for (size_t i = 0; i < obj.size_; i++)
  {
    os << obj.arr[i] << " ";
  }
  os << std::endl;
  return os;
}