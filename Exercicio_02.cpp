#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*O usuário deve inserir o valor de um produto e a quantidade, todos em ordem. Toda
    vez que o cliente inserir um produto, a opção de continuar inserindo produtos ou de finalizar o
    cálculo deve aparecer. Ao finalizar o cálculo, o cliente deve receber a soma dos valores
    de todos os produtos.*/

    double valor_produto;
    int quantidade_produto;
    double total_produtos = 0;
    string confirmacao_input = "N";

    while (confirmacao_input == "N") {
        cout << "Insira o valor do produto: ";
        cin >> valor_produto;
        cout << "Insira a quantidade desse produto: "; 
        cin >> quantidade_produto;

        total_produtos+= (valor_produto*quantidade_produto);

        cout << "Deseja finalizar a conta (Y) ou continuar (N)? ";
        cin >> confirmacao_input;
    }

    cout << "A soma de todos os valores é: " << total_produtos;
    return 0;
}