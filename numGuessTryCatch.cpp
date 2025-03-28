// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 19, 2025
// This is a number guessing game.

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // this function uses a try statement
    std::string userNumberAsString;
    int userNumberAsInt;
    int randomNumber;

    // generate a random number between 1 and 9
    srand((unsigned)time(NULL));
    randomNumber = rand() % 9 + 1;

    // Ask the user for their  number
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> userNumberAsString;

    // Checks if user numbers is a number and if it's right
    try {
        userNumberAsInt = std::stoi(userNumberAsString);
        if (userNumberAsInt == randomNumber) {
            std::cout << "You got it right!\n";
        } else {
            std::cout << "Wrong, try again! The correct number was "
            << randomNumber << ".\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid Number.\n";
    }
}
