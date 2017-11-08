#pragma once
#include "Defines.h"

//This function will return the maximum interval of "0" bits inside an integer number.
//For example, if the input number is N = 0b1000101, then the function will return 3.
//Or, if the number will be N = 0b10000, the function will return 0.
int binaryGap(int N);