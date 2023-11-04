#pragma once
#include "Array.h"

class AndArray : public Array {
 public:
  AndArray() : Array() {}
  AndArray(size_t size) : Array(size) {}
  AndArray(const AndArray& other) : Array(other) {}

  virtual AndArray& sum(const Array&) const;
  virtual AndArray& foreach (const Array&);

  virtual ~AndArray() {}
};
