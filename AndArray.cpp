#include "AndArray.h"

AndArray& AndArray::sum(const Array& other) const {
	AndArray abc;
  size_t new_size = 0;
	for (size_t i = 0; i < size_; i++)
	{
		for (size_t j = 0; j < other.size(); j++)
		{
			if(arr[i] == arr[j])
			{}
		}
	}
	return abc;
}

AndArray& AndArray::foreach(const Array& other) {
	AndArray abc;
	return abc;
}
