#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* Escreva um programa que permita o usuário inserir um número. O programa irá checar qual é o
    maior número de uma lista e qual a soma de todos os elementos na lista.*/

    int lista[6] = {0, 3, 7, 8, 9, 1};
    int novo_numero;

    int maior_numero = 0;
    int soma_numeros = 0;
    bool esta_presente = false;

    cout << "Insira um novo número para a lista: ";
    cin >> novo_numero;

    lista[0] = novo_numero;
    
    for (int i : lista)
    {
        soma_numeros += i;

        if (i > maior_numero) {
            maior_numero = i;
        }
    }

    cout << soma_numeros << "\n";
    cout << maior_numero << "\n";

    return 0;
}