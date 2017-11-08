#pragma once
#include "Defines.h"

//This alg. will find all the prime numbers from 2 to a certain limit, and it will display them.
//It assumes that the sequence of numbers is starting from 1 to nValue, with an increment by 1 between consecutive numbers.
//ATTN!: This algorithm doesn't know anything about what are the values from the array, but it will work only on positions inside array.

int sieveOfEratosthenes(const int nValue);