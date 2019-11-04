// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This is the guess the number program with a break

#include <stdlib.h>
#include <ctime>
#include <iostream>

int main() {
    // This function runs the guess the number program with a break

    // Random number seed
    unsigned int seed = time(NULL);

    // variables
    int correctNumber = rand_r(&seed) % 10;
    std::string userGuessString;
    int userGuessNum;

    while (true) {
        // Input
        std::cout << "Guess a number between 0 and 9 (integer): " << std::endl;
        std::cin >> userGuessString;
        std::cout << "" << std::endl;

        // Process
        try {
            userGuessNum = std::stoi(userGuessString);
            if (userGuessNum == correctNumber) {
                std::cout << "You are correct!!!" << std::endl;
                break;
            } else {
                std::cout << "Sorry, try again :)" << std::endl;
                std::cout << "" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer.";
            std::cout << "" << std::endl;
        }
    }
}
