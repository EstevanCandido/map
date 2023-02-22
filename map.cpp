#include <iostream>
#include <map>

using namespace std;

int obter_chave() {
    return 42;
}

int main() {
    map<int, double> dicionario;

    // Adicionando valores ao dicionário
    dicionario[obter_chave()] = 1.23;
    dicionario[obter_chave() + 1] = 3.45;
    dicionario[obter_chave() + 2] = 6.78;

    // Recuperando valores do dicionário
    double valor1 = dicionario[obter_chave()]; // valor1 = 1.23
    double valor2 = dicionario[obter_chave() + 1]; // valor2 = 3.45
    double valor3 = dicionario[obter_chave() + 2]; // valor3 = 6.78

    cout << valor1 << ", " << valor2 << ", " << valor3 << endl;

    return 0;
}
