// AutomatedDifferentiationDualNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DualNumbers.h"

DualNumber f(DualNumber x) { //this if f(x), the function we want to differentiate at x = a
    //we use f(x) = e^x + 3cos(x)sin(x) + x^2 + 9x^3 for this example
    return exp(x)   +   cos(x) * sin(x) * 3   +   x * x   +   x * x * x * 9;
}


int main()
{

    DualNumber x = DualNumber(6.0, 1.0); // we evaluate f(x) at x = 6 + 1ϵ  (x = 6)
    //we use 1ϵ so that the ϵ part of f(x) will be the derivative
    //f(a+bϵ) = f(a)+bf'(a)ϵ
    DualNumber answer = f(x);

    std::cout << "f(x) = " << answer.re << ", f'(x) = " << answer.eps;
}

