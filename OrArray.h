#pragma once
#include "Array.h"

class OrArray : public Array {
 public:
  OrArray() : Array() {}
  OrArray(size_t size) : Array(size) {}
  OrArray(const OrArray& other) : Array(other) {}

  OrArray* sum(const Array&) const override;
  void foreach () override;

  virtual ~OrArray() {
    std::cout << "derived dest";
  }
};
