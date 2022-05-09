#include <iostream> // printf
#include <conio.h> // initscr, printw, getch, endwin
#include "nodejs-math.h" // Math functions

void AskToExit()
{
    printf("Press any key to exit...");
    getch();
}

int main()
{
    int randomNumberBetween = Math::randomBetween(1, 10);
    printf("Random number between 1 and 10: %d\n", randomNumberBetween);

    float randomNumber = Math::random();
    printf("Random number between 0 and 1: %f\n", randomNumber);

    int roundedNumber = Math::round(1.983122);
    printf("Rounded number: %f\n", roundedNumber);

    float ceiledNumber = Math::ceil(1.983122);
    printf("Ceiled number: %f\n", ceiledNumber);

    float absNumber = Math::abs(-1.983122);
    printf("Absolute number: %f\n", absNumber);

    float sqrtNumber = Math::sqrt(9);
    printf("Square root of 9: %f\n", sqrtNumber);

    float powNumber = Math::pow(2, 3);
    printf("2 raised to the power of 3: %f\n", powNumber);

    float logNumber = Math::log(10);
    printf("Log of 10: %f\n", logNumber);

    AskToExit();

    return 0;
}
