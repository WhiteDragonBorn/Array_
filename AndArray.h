#pragma once
#include "Array.h"

class AndArray : public Array {
 public:
  AndArray() : Array() {}
  AndArray(size_t size) : Array(size) {}
  AndArray(const AndArray& other) : Array(other) {}

  AndArray* sum(const Array&) const override;
  void foreach () override;

  virtual ~AndArray() {
    std::cout << "derived dest";
  }
};
