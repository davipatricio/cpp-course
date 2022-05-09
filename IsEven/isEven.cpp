#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num = 0;

    cout << "Type a number: ";
    cin >> num;

    cout << "The number " << num << " is " << (isEven(num) ? "even" : "odd") << endl;

    return 0;
}