#include <iostream>
#include <string.h>
using namespace std;

class Pessoa
{
public:
    char nome[50];
    char cpf[20];
    int idade;

    void setNome(char *nome)
    {
        strcpy(this->nome, nome);
    };
    void setIdade(int idade)
    {
        this->idade = idade;
    };

    char *getNome()
    {
        return nome;
    };
    int getIdade()
    {
        return idade;
    };
};

int main()
{
    Pessoa p1;

    strcpy(p1.nome, "Joao");
    strcpy(p1.cpf, "123.456.789-00");
    p1.idade = 30;

    cout << "Nome 1: " << p1.nome << endl << endl;

    Pessoa p2 = {"Maria", "123.456.789-00", 23};
    cout << "Nome 2: " << p2.nome << endl << endl;

    return 0;
}