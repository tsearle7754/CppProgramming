# include <iostream>
# include <string>
# include <vector>
using namespace std;

// Templates- same concept as irl
// Can create templates of classes and functions only
// Can work on many data types without rewriting the code- same code, dif data types
// Assign value at the time of calling. C++ will look at what is being input and assign an appropriate data type (at runtime)
// Could have as many values as needed for templates

// Consider one datatype, make the function for that integer- then convert into template with desired datatype

template<typename GenericType>      // template, typename stay same, generictype can change
GenericType maxValue(const GenericType value1, const GenericType value2)
{
if (value1 > value2)
    return value1;
else
    return value2;
}

// Class templates
// push- add to top. pop- remove top value.
// Template can be put in header file- struggles with 3 files, need skeleton in the header file
// Careful with pre vs post incrementation (elements[size++] = value)
// Must mention what you want to push, do not need to specify what you pop
// Can assign a default type- template<typename T = int>

// Vectors
// Size can grow automatically if needed- can initialize with size, will adjust accordingly
// Can only hold elements of one datatype
// v[i] and v.at(i)
// Initialization: vector<int> intVector{1, 9};
// vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
// Logic for two dimensional array or vector, how to access all those values (sum all values up)
// WILL be asked to write small functions for array and vector

int sum(const vector<vector<int>>& matrix)
{
  int total = 0;
  for (unsigned int row = 0; row < matrix.size(); row++)
  {
    for (unsigned column = 0; column < matrix[row].size(); column++)
    {
      total += matrix[row][column];
    }
  }

  return total;
}

int main()
{
  vector<vector<int>> matrix{
    {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  cout << "Sum of all elements is " << sum(matrix) << endl;

  return 0;
}
//Look into shuffle deck of cards from slides
// Learn vectors so you never have to use arrays again
// push_back adds a new element to the end of a container
// Vector initializes with zeros- do not use push_back with undefined vector, will double in size
// Can use insert(p, value) where p is a pointer to the position in the vector- does not delete value there, moves the value to the right
// v.begin()- points to first element in vector: v.begin()+i
// v.end()- points PAST the last element in the vector: v.end()-1 for last element in vector
// v.insert, v.erase, sort, random_shuffle, max_element, min_element, find, v.add, v.pop_back, v.clear()--- look at slides for array vs. vector comparison

// Exam questions will be similar to assignments and practice
