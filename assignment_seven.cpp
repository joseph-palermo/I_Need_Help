// Copyright (c) 2019 Joseph Palermo All rights reserved.

// Created by: Joseph Palermo
// Created on: December 2019
// This program calculates the volume of an icosahedron

#include <iostream>
#include <iomanip>
#include <array>
#include <numeric>


template<size_t N>
int OddNumber(std::array<int, N> posInt) {

    // input & variables
    int loopCounter;
    int numberFromUser;
    posInt = [];
    positivity [];

    for (loopCounter = 0; loopCounter < (posInt); loopCounter++) {
        std::cout << "Enter a number you want to check: ";
        std::cin >> numberFromUser;
        positivity[loopCounter] = numberFromUser;

    } for (loopCounter = 0; loopCounter < std::array<int, N> positivity); loopCounter++ {
        if positivity[loopCounter] % 2 != 0 {
            oddInt[loopCounter] = positivity([loopCounter])  // help
        } else {
            oddInt[loopCounter] = -1
        }
    }
    return oddInt;
}


int main() {
    // this function calls other functions
    int oddNumber;
    int numberFromUser;
    int posInt;  // should I reference these by array or by list of by integer?
    int check;
    int loopCounter;
    // call function
        std::cout << "This program takes all numbers from 0 to x and outputs "
              "the odd numbers.";
        std::cout << "";
    try {
        std::cout << "Enter amount of numbers you want to check (0-100): ";
        std::cin >> posInt;

        // call function
        numberFromUser = oddNumber(posInt);


        std::accumulate(numberFromUser) / posInt  // help
        std::cin >> check;

        std::cout << "";
        if (check == -1) {
            std::cout << "No odd numbers";
        } else {
            } for (loopCounter = 0; loopCounter < std::array<int, N> numberFromUser) {  // help
                if (numberFromUser[loopCounter]) == -1 {  // help
                    continue;
                } else {
                    std::cout << numberFromUser[loopCounter];  // help
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "";
        std::cout << "Please insert a positive integer";
    }
}
