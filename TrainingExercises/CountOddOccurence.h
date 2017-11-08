#pragma once
#include "Defines.h"

//This function will make a very quick check O(n) on the input vector and it will return the value which is not duplicated 
//in the array. For example, for a = {1,3,5,3,1}, the function will return 5.
//ATTN!: THis function will not work proper with 
int getOddOccurrence(std::vector<int> inp);

//This function represents another solution for finding an odd occurence in an array.
int solution(std::vector<int> &input);