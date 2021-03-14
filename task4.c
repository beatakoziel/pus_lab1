//
// Created by beatinho on 14.03.2021.
//

#include <stdio.h>
#include "common.h"

int checkNumSign(double num) {
    if (num > 0)
        return 1;
    else if (num == 0)
        return 0;
    else return -1;
}

void task4() {
    printf("Write number to check sign:\n");
    double num = getDoubleFromUser();
    if (checkNumSign(num) == 1)
        printf("Number is positive");
    else if (checkNumSign(num) == 0)
        printf("Number is zero");
    else printf("Number is negative");
}