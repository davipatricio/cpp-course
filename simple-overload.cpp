#include <iostream>
using namespace std;

void sendMessage(int n) {
    cout << "Number: " << n << endl;
}

void sendMessage(char c) {
    cout << "Character: " << c << endl;
}

void sendMessage() {
    cout << "No parameter" << endl;
}

int main() {
    sendMessage(1);
    sendMessage('a');
    sendMessage();
    return 0;
}