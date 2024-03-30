#include <iostream>
#include <locale>
using namespace std;

int main() {
    int numero;
    int soma = 0;

	setlocale(LC_ALL,"Portuguese");

    cout << "Digite 5 números:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numero;
        soma += numero;
    }


    float media = soma / 5.0;


    cout << "A soma dos números é: " << soma << endl;
    cout << "A média dos números é: " << media << endl;

    return 0;
}

