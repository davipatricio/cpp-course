#include <iostream>
#include <string.h>

using namespace std;

// Function to invert the string
void invert(char name[]) {
    int length = strlen(name);
    for (int i = length - 1; i >= 0; i--) cout << name[i];
}

int main() {
    char name[] = "Hello World!";
    invert(name);
    return 0;
}
