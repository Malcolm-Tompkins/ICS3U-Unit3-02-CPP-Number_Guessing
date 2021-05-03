// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 1, 2021
// This file runs the number guessing game
#include <iostream>
int user_number, program_number;
int main() {
    // Function that runs the game
    std::cout << "Welcome to the number guessing game!\n";
    std::cout << "Input your number: ";
    std::cin >> user_number;
    // User input
    program_number = 6;
    if (user_number == program_number) {
        std::cout << "You have guessed the correct number!\n";
    } else {
        std::cout << "You guessed wrong!";
    }
}
