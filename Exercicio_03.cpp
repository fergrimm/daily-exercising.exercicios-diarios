#include <iostream>
using namespace std;

struct {
    string nome_carro;
    int valor_carro;
    string modelo_carro;

} MinhaEstrutura, MinhaEstrutura1;

int main()
{
    MinhaEstrutura.nome_carro = "Sedan";
    MinhaEstrutura.modelo_carro = "Branco 2009";
    MinhaEstrutura.valor_carro = 39000;

    cout << MinhaEstrutura.nome_carro << "\n";
    cout << MinhaEstrutura.modelo_carro << "\n";
    cout << MinhaEstrutura.valor_carro << "\n";

    MinhaEstrutura1.nome_carro = "Corsa";
    MinhaEstrutura1.modelo_carro = "Cinza 2011";
    MinhaEstrutura1.valor_carro = 45000;

    cout << MinhaEstrutura1.nome_carro << "\n";
    cout << MinhaEstrutura1.modelo_carro << "\n";
    cout << MinhaEstrutura1.valor_carro << "\n";

    return 0;
}