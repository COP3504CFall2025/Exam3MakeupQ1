Exam 3 - Coding Portion
---

# Question 1
In this problem, you will develop a new function in our provided `LinkedList` class. Please observe the already existing structures found in `GetStats.hpp`.

Create a new function named `getStats`. This function should take in no parameters and return an `int*`.

This function should:

1. Allocate an array on the heap.
2. Calculate the minimum of all nodes, maximum of all nodes, and the mean of all nodes. These numbers should be stored as integers. If the mean is a decimal value, round it down to the lower integer.
3. Return the pointer to the first element in the return array. The return array should be structured as `[min, max, mean]`.

If head is nullptr, then your return array should have all three elements set to zero.

### Minimum (Min):

The minimum value in a dataset is the smallest value.

For example, in the set of values 3, 5, and 7, the minimum value is 3.

### Maximum (Max):
The maximum value in a dataset is the largest value.

For example, in the set of values 3, 5, and 7, the maximum value is 7.

### Mean (Average):
The mean, or average, is calculated by summing all the values in a dataset and then dividing by the number of values.

For example, if you have the values 3, 5, and 7, the mean would be (3 + 5 + 7) / 3 = 15 / 3 = 5.


# Question 2
For this problem, you will implement two functions `consultMax` and `returnMaxMap`.

The `consultMax` function requires a `std::string` and a `std::map` with keys of type `std::string` and values `std::vector` of floats **both passed in by const reference**, and returns the maximum value within the vector associated with the provided string.  If the key is not found, you may return `-1`.

The `returnMaxMap` function accepts a `std::map` with keys of type `std::string` and value `std::vector` of floats. The function will return a new `std::map` with keys of type `std::string` and values of type `float`. The returned map has the same string keys, and its associated value is a float that corresponds to the the maximum value found within the corresponding vector.

