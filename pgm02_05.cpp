//
//   This file contains the C++ code from Program 2.5 of
//   "Data Structures and Algorithms
//    with Object-Oriented Design Patterns in C++"
//   by Bruno R. Preiss.
//
//   Copyright (c) 1998 by Bruno R. Preiss, P.Eng.  All rights reserved.
//
//   http://www.pads.uwaterloo.ca/Bruno.Preiss/books/opus4/programs/pgm02_05.cpp
//
#include <iostream>
#include <cmath>

int main (int, char* [])
{
    double result = 0;
    for (unsigned long int i = 1; i <= 500000; ++i)
	result += 1./i - std::log ((i + 1.)/i);
    cout << "gamma = " << result << endl;
    return 0;
}
