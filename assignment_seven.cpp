// Copyright (c) 2019 Joseph Palermo All rights reserved.

// Created by: Joseph Palermo
// Created on: December 2019
// This program calculates the volume of an icosahedron

#include <iostream>
#include <iomanip>
#include <array>
#include <numeric>


template<size_t N>  // help
int OddNumber(std::array<int, N> posInt) {
    // this function calculates the volume of an icosahedron
    // input & variables
    int positivity = [];
    int odd_int = [];  // are these how you cite arrays?
    int loopCounter;
    int numberFromUser;
    int posInt;

    for (loopCounter = 0; loopCounter < (posInt); loopCounter++) {  // help
        std::cout << "Enter a number you want to check: ";
        std::cin >> numberFromUser;
        positivity[loopCounter] = numberFromUser;  // help

    } for (loopCounter = 0; loopCounter < std::array<int, N> positivity); loopCounter++ {  // help
        if positivity[loopCounter] % 2 != 0 {  // help
            odd_int[loopCounter] = positivity([loopCounter])  // help
        } else {
            odd_int[loopCounter](-1)  // help
        }
    }
    return odd_int;
}


int main() {
    // this function calls other functions
    int oddNumber;
    int numberFromUser;
    int posInt;  // should I reference these by array or by list of by integer?
    int check;
    int loopCounter;
    // call function
        std::cout << "This program takes all numbers from 0 to x and outputs the "
              "odd numbers.";
        std::cout << "";
    try {
        std::cout << "Enter amount of numbers you want to check (0-100): ";
        std::cin >> posInt;

        // call function

        std::array<int, 10> posInt;  // I dont understand why I have 10 as my parameter when the number can be infinite
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
