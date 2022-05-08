#include <iostream>
#include <string.h>
using namespace std;

struct Person {
    char nome[100];
    int idade;
};

int main() {
    Person p[2];
    strcpy(p[0].nome, "Davi");
    p[0].idade = 16;

    strcpy(p[1].nome, "Joao");
    p[1].idade = 18;

    cout << "Nome da primeira pessoa: " << p[0].nome << endl;
    cout << "Idade da primeira pessoa: " << p[0].idade << endl << endl;

    cout << "Nome da segunda pessoa: " << p[1].nome << endl;
    cout << "Idade da segunda pessoa: " << p[1].idade << endl;

    return 0;
}