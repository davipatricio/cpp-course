#include <iostream>
#include <math.h>
#include "nodejs-math.h"

// 'Math::random()' returns a random number between a int and another int
int Math::randomBetween(int min, int max)
{
    return Math::round(Math::random() * (max - min + 1) + min);
};

// 'Math::random()' returns a random number between 0 (inclusive), and 1 (exclusive)
float Math::random()
{
    std::srand(time(NULL));
    float r = rand() / static_cast<float>(RAND_MAX);
    return r;
};

// 	'Math::round(x)' Rounds x to the nearest integer
int Math::round(float n)
{
    return std::round(n);
};

// 'Math::ceil(x)' returns the value of x rounded up to its nearest integer
float Math::ceil(float n)
{
    return std::ceil(n);
};

// 'Math::abs(x)' Returns the absolute value of x
float Math::abs(float n)
{
    return std::fabs(n);
}

// 'Math::pow(x, y)' Returns x raised to the power of y
float Math::pow(float x, float y)
{
    return std::pow(x, y);
}

// 'Math::sqrt(x)' Returns the square root of x
float Math::sqrt(float n)
{
    return std::sqrt(n);
}

// 'Math::log(x)' Returns the natural logarithm of x
float Math::log(float n)
{
    return std::log(n);
}
