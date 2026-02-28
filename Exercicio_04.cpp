#include <iostream>
using namespace std;

int main () 
{
    /* Um programa simples que mostre a tabuada do 5 até o 11. */

    for (int multiplicador = 5; multiplicador < 12; multiplicador++) { //Quantidade de tabuadas
        for (int fator = 1; fator < 11; fator++) { //Tabuadas em si
            cout << fator << "x" << multiplicador << "= " << (fator*multiplicador) << "\n";
        }
    }

    return 0;
}