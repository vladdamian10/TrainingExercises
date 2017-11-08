#pragma once
#include "Defines.h"

//The function returns how many perfect squares are found in the interval of int numbers, represented 
//by the parameters: startIntervalValue and stopIntervalValue/
//For example, startIntervalValue = 4 and stopIntervalValue = 17 => [4,17] there will be 2^2 = 4, 3^2 = 9, 4^2 = 16 perfect squares in that interval,
//and the function will return 3
int numberOfPerfectSquares(int startIntervalValue, int stopIntervalValue);