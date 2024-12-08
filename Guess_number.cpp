#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int numberToGuess = std::rand() % 100 + 1;

    int userGuess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have chosen a number between 1 and 100.\n";
    std::cout << "Can you guess it?\n";

    // Game loop
    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        numberOfTries++;

        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You've guessed the number " << numberToGuess << " in " << numberOfTries << " tries.\n";
        }
    }

    return 0;
}
