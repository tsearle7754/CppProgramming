#include <iostream>
#include <stdexcept>
using namespace std;

// exceptions will lead to successful terminations of the program.
// if loops- low level exception
// exit(); -- terminates program successfully/

//try-throw-catch
// try { code }
// catch (type (e)) { code to process exception } -- type is for when you don't care for the contents of an exception object
// throw will take you to catch block- will raise exception

// try will not run if catch is not true

// class exception names are unnegotiable.
// throw only necessary for created exceptions

double getArea(double radius)
{
  if (radius < 0)
    throw invalid_argument("Radius cannot be negative");

  return radius * radius * 3.14159;
}

int main()
{
  // Prompt the user to enter radius
  cout << "Enter radius: ";
  double radius;
  cin >> radius;

  try
  {
    double result = getArea(radius);
    cout << "The area is " << result << endl;
  }
  catch (exception& ex)
  {
    cout << ex.what() << endl;
  }

  cout << "Execution continues ..." << endl;

  return 0;
}

// for multiple catch for one try- lowest level type must be at top (child, then parent...)
    // otherwise, parent will execute and child will not-- product of inherited derived exceptions

// Custom exception classes
    // class TriangleException: public logic_error-- gets the built-in functions w/o writing from scratch

// const char* what() const noexcept override {} -- return a phrase specific to that class



