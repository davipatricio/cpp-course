struct Math
{
    // 'Math::random()' returns a random number between a int and another int
    static int randomBetween(int min, int max);

    // 'Math::random()' returns a random number between 0 (inclusive), and 1 (exclusive)
    static float random();

    // 	'Math::round(x)' Rounds x to the nearest integer
    static int round(float n);

    // 'Math::ceil(x)' returns the value of x rounded up to its nearest integer
    static float ceil(float n);

    // 'Math::abs(x)' Returns the absolute value of x
    static float abs(float n);

    // 'Math::sqrt(x)' Returns the square root of x
    static float sqrt(float n);

    // 'Math::pow(x, y)' Returns x raised to the power of y
    static float pow(float x, float y);

    // 'Math::log(x)' Returns the natural logarithm of x
    static float log(float n);
};