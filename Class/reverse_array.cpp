// Reverse an array
#include <iostream>
using namespace std;

// newList is the reversal of list
void reverse(const int list[], int newList[], int size)  // parameters do NOT make new arrays/lists, they hold the address of the original arrays (reference)
{
  for (int i = 0, j = size - 1; i < size; i++, j--)  // j starts at end and decrements, i starts at beginning and increments (place 0 goes to place 6)
  {
    newList[j] = list[i];   // newList gets values from list in reverse order
  }
}

void printArray(const int list[], int size)
{
  for (int i = 0; i < size; i++)
    cout << list[i] << " ";
}

int main()
{
  const int SIZE = 6;
  int list[] = {1, 2, 3, 4, 5, 6};
  int newList[SIZE];

  reverse(list, newList, SIZE);

  cout << "The original array: ";
  printArray(list, SIZE);
  cout << endl;

  cout << "The reversed array: ";
  printArray(newList, SIZE);
  cout << endl;

  return 0;
}