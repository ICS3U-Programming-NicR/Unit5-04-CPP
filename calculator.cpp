// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program figures out the area of a triangle

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <iomanip>

using std::cin;
using std::cout;
using std::stof;
using std::stoi;
using std::string;

float calculate(string sign, float firstNumber, float secondNumber) {
    float answer;
    if (sign == "+") {
        answer = firstNumber + secondNumber;
    } else if (sign == "-") {
        answer = firstNumber - secondNumber;
    } else if (sign == "/") {
        answer = firstNumber / secondNumber;
    } else if (sign == "*") {
        answer = firstNumber * secondNumber;
    } else if (sign == "%") {
        try {
            int firstNumberInt = firstNumber;
            int secondNumberInt = secondNumber;
            answer = firstNumberInt % secondNumberInt;
        } catch (...) {
            cout << "to do a modulo you can't have decimals";
        }
    }
    return answer;
}

int main() {
    // try again loop
    while (true) {
        // variables
        float firstNumber, secondNummber, answer;
        string firstNumberStr, secondNummberStr, sign, garbage;
        cout << "Enter the operator you want to calculate(+,-,/,*,%): ";
        cin >> sign;
        cout << "Enter the first number you want to calculate: ";
        cin >> firstNumberStr;
        cout << "Enter the second number you want to calculate: ";
        cin >> secondNummberStr;
        if (sign == "+" ||
            sign == "-" ||
            sign == "*" ||
            sign == "/" ||
            sign == "%") {
            try {
                firstNumber = stof(firstNumberStr);
                secondNummber = stof(secondNummberStr);
                answer = calculate(sign, firstNumber, secondNummber);
                cout << firstNumber << " " << sign <<\
                        " " << secondNummber << " = " << answer;
            } catch (...) {
                cout << "you have to inter a real number";
            }
        } else {
            cout << "you have to input a valid operator";
        }
        cin.get();
        cout << "\nIf you would like to calculate again just press <enter>: ";
        if (cin.get() == '\n') {
            continue;
        } else if (cin.get() != '\n') {
            cin >> garbage;
            continue;
        }
    }
}
