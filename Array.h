#pragma once
#include <cmath>
#include <cstddef>
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

// typedef unsigned long long ull;
typedef double data_t;

class Array {
 private:
 protected:
  const size_t size_;
  data_t* arr;

 public:
  Array() : size_(0), arr(nullptr) {}
  Array(size_t size) : size_(size) {
    arr = new data_t[size_];
    for (size_t i = 0; i < size_; i++) {
      arr[i] = (data_t)i+1;
    }
  }
  Array(const Array&);
  Array& operator=(const Array&);

  size_t size() const noexcept { return size_; }
  const data_t* data() const { return arr; }

  data_t& operator[](size_t index) { return arr[index]; }
  const data_t& operator[](size_t index) const { return arr[index]; }

  virtual Array* sum(const Array&) const = 0;
  virtual void foreach () = 0;

  friend std::ostream& operator<<(std::ostream&, const Array&);

  virtual ~Array() { 
    std::cout << "base dest"; 
    delete[] arr; }
};
