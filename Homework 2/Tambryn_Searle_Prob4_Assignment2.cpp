# include <iostream>
#include <cstdlib>   // For rand(), srand()
#include <ctime>     // For time()
using namespace std;

int sumDice(int dice1, int dice2) {   // Function to sum two die values
    return dice1 + dice2;
}

int main() {
    srand(time(0));  // Seed random number generator

    int die1 = (rand() % 6) + 1;   // Random # between 1 and 6
    int die2 = (rand() % 6) + 1;

    cout << "You rolled " << die1 << " + " << die2 << endl;
    int result = sumDice(die1, die2);

    if (result == 7 || result == 11) {
        cout << "You win" << endl;
    } else if (result == 2 || result == 3 || result == 12) {
        cout << "You lose" << endl;
    } else 
        cout << "point is " << result << endl;

    int point = result;
    while (true) {    // Loop until win or lose

        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;

        cout << "You rolled " << die1 << " + " << die2 << endl;
        result = sumDice(die1, die2);

        if (result == point) {
            cout << "You win" << endl;
            break;
        } else if (result == 7) {      // No 11
            cout << "You lose" << endl;
            break;
        } else 
            cout << "point is " << result << endl;
    }
}