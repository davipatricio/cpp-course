/*
    Cálculo do fatorial
    0! = 1! = 1
    3! = 3 * 2 * 1 = 6
    4! = 4 * 3 * 2 * 1 = 24
    5! = 5 * 4 * 3 * 2 * 1 = 120
*/

#include <iostream>

using namespace std;

double getFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++)
        fatorial *= i;
    return fatorial;
}

int main() {
    int num = 0;

    cout << "Type a number: ";
    cin >> num;
    
    cout << "The factorial of " << num << " is " << getFatorial(num) << endl;

    return 0;
}