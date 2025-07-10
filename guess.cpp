#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl << endl;
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct  number in " 
                 << attempts << " attempts!" << endl;
        }
    } while (guess != secretNumber);
    
    return 0;
}