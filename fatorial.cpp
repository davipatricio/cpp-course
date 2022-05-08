/*
    Cálculo do fatorial
    0! = 1! = 1
    3! = 3 * 2 * 1 = 6
    4! = 4 * 3 * 2 * 1 = 24
    5! = 5 * 4 * 3 * 2 * 1 = 120
*/

#include <iostream>
#include <sstream>
#include <Windows.h>

using namespace std;

int main() {
    int num, fatorial = 1;

    cout << "Type a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
        fatorial *= i;
    
    cout << "The factorial of " << num << " is " << fatorial << endl;

    return 0;
}