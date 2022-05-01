// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-01
// This program shows values from 1000 - 2000

#include <iostream>

int main() {
    // this function shows values from 1000 - 2000
    // with a new line every 5 numbers

    // process, output
    for (int counter = 1000; counter < 2000 + 1; counter++) {
        if (counter % 5 == 0) {
            std::cout << "" << std::endl;
            std::cout << counter << " ";
        } else {
            std::cout << counter << " ";
        }
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
