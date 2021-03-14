//
// Created by beatinho on 14.03.2021.
//

#include <stdio.h>
#include "common.h"

double convertMilesToKilometers(double miles) {
    return miles * 1.609344;
}

void task2() {
    printf("Write miles number to be converted:\n");
    double miles = getDoubleFromUser();
    double kilometers = convertMilesToKilometers(miles);
    printf("%.4lf miles is %.4lf kilometers.", miles, kilometers);
}