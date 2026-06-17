#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "I have chosen a secret number between 1 and 100. Guess it!\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "The secret number is smaller!" << endl;
        }
        else if (guess < secretNumber) {
            cout << "The secret number is larger!" << endl;
        }
        else {
            cout << "Congratulations! Correct guess!" << endl;
            cout << "Number of attempts: " << attempts << endl;
            break;
        }
    }
    return 0;
}
