#include "search_algos.h"

def linear_search(array, size, value):
  """
  Searches for a value in an array of integers using the Linear search algorithm.

  Args:
    array: A pointer to the first element of the array to search in.
    size: The number of elements in array.
    value: The value to search for.

  Returns:
    The first index where value is located, or -1 if value is not present in array.
  """

  if array is None:
    return -1

  for i in range(size):
    if array[i] == value:
      return i

  return -1
