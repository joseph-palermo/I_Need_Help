#!/usr/bin/env python3

# Created by: Joseph Palermo
# Created on: December 2019
# This program calculates all odd numbers from 0 - x


def odd_number(pos_int):
    # This function calculates the volume of an icosahedron
    counter = 0
    positivity = []
    odd_int = []

    for counter in range(pos_int):
            number_from_user = int(input("Enter a number you want to check: "))
            positivity.append(number_from_user)

    for counter in range(len(positivity)):
        if positivity[counter] % 2 != 0:
            odd_int.append(positivity[counter])
        else: 
            odd_int.append(-1)
    
        
    return odd_int


def main():
    # this function calls other functions

    try:
        print("This program takes all numbers from 0 to x and outputs the "
              "odd numbers.")
        print("")
        pos_int = int(input("Enter amount of numbers you want to check (0-100)"
                            ": "))

        # call function
        number_from_user = odd_number(pos_int)

        check = sum(number_from_user)/pos_int

        print("")
        if check == -1:
            print("No odd numbers")
        else:
            for counter in range (len(number_from_user)):
                if number_from_user[counter] == -1:
                    continue
                else:
                    print(number_from_user[counter])
    except ValueError:
        print("")
        print("Please insert a positive integer")


if __name__ == "__main__":
    main()
