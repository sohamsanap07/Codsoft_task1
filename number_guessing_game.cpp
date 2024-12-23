#include <bits/stdc++.h>
using namespace std;

int main() {


    // Seed the random number generator
    srand(time(0));

    int num = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Guess the number (between 1 and 100):" << endl;

    int guess;

    while (true) {

        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < num) {
            cout << "Too low! Try again." << endl;

        } else if (guess > num) {
            cout << "Too high! Try again." << endl;

        } else {
            cout << "Congratulations! You guessed it right." << endl;
            break;
        }
        
    }

    return 0;
}