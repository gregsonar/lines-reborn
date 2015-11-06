//////////////////////////////////////////////////////////////
// random.h : Random functions for Visual C++.
// (C) 2001 Written by Ivan Dobritsky
// This functions doesn't suppoted by standart ANSI/ISO, so
// for example Visual C++ doesn't understand it.


#ifndef RANDOM_H
#define RANDOM_H

#include <ctime>

#define random(num) (int)(((long)rand()*(num))/(RAND_MAX+1))
#define randomize() srand((unsigned)time(NULL))

#endif //RANDOM_H