//
//   This file contains the C++ code from Program 2.6 of
//   "Data Structures and Algorithms
//    with Object-Oriented Design Patterns in C++"
//   by Bruno R. Preiss.
//
//   Copyright (c) 1998 by Bruno R. Preiss, P.Eng.  All rights reserved.
//
//   http://www.pads.uwaterloo.ca/Bruno.Preiss/books/opus4/programs/pgm02_06.cpp
//
int GeometricSeriesSum (int x, unsigned int n)
{
    int sum = 0;
    for (unsigned int i = 0; i <= n; ++i)
    {
	int prod = 1;
	for (unsigned int j = 0; j < i; ++j)
	    prod *= x;
	sum += prod;
    }
    return sum;
}
