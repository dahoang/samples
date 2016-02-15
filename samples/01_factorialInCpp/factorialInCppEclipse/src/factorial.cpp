/*
 * factorial.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: omar
 */

#include "factorial.h"
int factorial(int n) {
    int result = 1;
    for(int i = n; i > 0; i--) {
       result *= i;
    }
    return result;
}


