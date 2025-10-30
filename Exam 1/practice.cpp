# include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    int num1, num2;
    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float) num1 / num2;
    cout << "The sum, difference, product, and quotient are (respectively): " << sum << " " << difference << " " << product << " " << quotient << endl;

    int temp;
    cout << "Enter a temperature in Fahrenheit or Celsius: " << endl;
    cin >> temp;
    char scale;
    float temp_in_c = (5/9) * (temp - 32);
    float temp_in_f = ((9/5) * temp) + 32;
    cout << "If the temperature entered was in Fahrenheit, enter (F). If Celsius, enter (C)." << endl;
    cin >> temp;
    if (scale == 'F')
        cout << "The temperature in Celsius is: " << temp_in_c << endl;
    if (scale == 'C')
        cout << "The temperature in Fahrenheit is: " << temp_in_f << endl;
    
    string fruits[4] = {"plum", "banana", "strawberry", "raspberry"};
    string list[2] = {"hello", "world"};

    int list1[] = {3, 7, 9};
    int size1 = sizeof(list1) / (sizeof(list1[0]));
    int sum1 = 0;
    // Loop to calculate sum
    for (int i = 0; i < size1; i++)
        sum1 += list1[i];
    // Compute average (cast to double so we don't lose decimals)
    double average = static_cast<double>(sum1) / size1;

    // Print results
    cout << "Sum = " << sum1 << endl;
    cout << "Average = " << average << endl;
}