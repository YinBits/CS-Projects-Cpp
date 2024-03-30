#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Digite um n�mero inteiro maior que 0 e menor que 1000: ";
    cin >> numero;

    while (numero <= 0 || numero >= 1000) {
        cout << "N�mero inv�lido! Digite novamente um n�mero entre 1 e 999: ";
        cin >> numero;
    }

    // Calcula a quantidade de centenas, dezenas e unidades
    int centenas = numero / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;


    cout << numero << " = ";

    if (centenas > 0) {
        cout << centenas << " centena";
        if (centenas > 1) {
            cout << "s";
        }
        cout << ", ";
    }

    if (dezenas > 0) {
        cout << dezenas << " dezena";
        if (dezenas > 1) {
            cout << "s";
        }
        if (unidades > 0) {
            cout << " e ";
        }
    }

    if (unidades > 0 || (centenas == 0 && dezenas == 0)) {
        cout << unidades << " unidade";
        if (unidades > 1) {
            cout << "s";
        }
    }

    cout << endl;

    return 0;
}

