//
// Created by jack on 21/10/17.
//

#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
  std::srand(std::time(0));
    int numberToGuess = rand() % 100 + 1;
    int guess = 0;
    std::cout << "This game has a number between 1-100,"
            "enter a number and we will tell you higher or lower!\n";

    while (guess != numberToGuess) {
        std::cout << "Enter a number:";
        std::cin >> guess;

        if (guess < numberToGuess) {
            std::cout << "Too low!";
        }
        else if (guess > numberToGuess) {
            std::cout << "Too high!";
        }

        else
            std::cout << "Correct, the number was " << guess << "!\n";
    }
}
