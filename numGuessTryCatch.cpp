// Created by: Shem
// Created on: 10/26/2025
// This program is a number guessing game between 0 and 9
// It checks if the user entered an integer
// and tells them if they guessed correctly.
// Copyright 2025 Shem
#include <iostream>
#include <random>
#include <string>

int main() {
// Random number generator
    std::random_device rssed;
    std::mt19937 rgen(rssed());
    std::uniform_int_distribution<int> dist(0, 9);
    int answer = dist(rgen);
// This is where the user types an input
    std::cout << "Guess a number between 0 and 9: ";
    std::string user_input;
    std::cin >> user_input;

    try {
// Try to convert input to integer
        int guess = std::stoi(user_input);

// Check if guess is correct
        if (guess == answer) {
            std::cout << "You guessed correctly!" << std::endl;
        } else {
        std::cout <<"Wrong guess. The correct answer was: "
        << answer << std::endl;
        }
    } catch (const std::invalid_argument) {
        std::cerr << user_input << " is not an integer." << std::endl;
    }
}
