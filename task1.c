//
// Created by beatinho on 14.03.2021.
//

#include <stdio.h>
#include "common.h"

double convertFeetToMeters(double feet) {
    return feet * 0.3;
}

void task1() {
    printf("Write feet number to be converted:\n");
    double feet = getDoubleFromUser();
    double meters = convertFeetToMeters(feet);
    printf("%.2lf feet is %.2lf meters.", feet, meters);
}