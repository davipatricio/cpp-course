#include <iostream>

using namespace std;

// Function to invert the string
void invert(char name[]) {
    int length = 0;
    for (length = 0; name[length] != '\0'; length++);
    for (int i = length - 1; i >= 0; i--) cout << name[i];
}

int main() {
    char name[] = "Hello World!";
    invert(name);
    return 0;
}
