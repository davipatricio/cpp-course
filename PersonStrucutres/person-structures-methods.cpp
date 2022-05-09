#include <iostream>
#include <string.h>
using namespace std;

struct Person
{

private:
    int idade;

public:
    char nome[100];
    Person(const char nome[100], int idade);

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

Person::Person(const char nome[100], int idade)
{
    strcpy(this->nome, nome);
    this->idade = idade;
}

int main()
{
    Person p("Davi", 16);

    cout << "Meu nome: " << p.getNome() << endl;
    cout << "Minha idade: " << p.getIdade() << endl;

    return 0;
}