//
// Created by beatinho on 14.03.2021.
//

#include <stdio.h>
#include <stdbool.h>
#include "common.h"

bool checkIfNumIsEven(int num) {
    if (num % 2 == 0)
        return true;
    else return false;
}

void task3() {
    printf("Write number to check if even:\n");
    int num = getIntFromUser();
    if (checkIfNumIsEven(num))
        printf("Number is even");
    else printf("Number is odd");
}