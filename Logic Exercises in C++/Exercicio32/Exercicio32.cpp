#include <iostream>
#include <locale>
using namespace std;

int main() {
    int numero;
    int soma = 0;

	setlocale(LC_ALL,"Portuguese");

    cout << "Digite 5 n�meros:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numero;
        soma += numero;
    }


    float media = soma / 5.0;


    cout << "A soma dos n�meros �: " << soma << endl;
    cout << "A m�dia dos n�meros �: " << media << endl;

    return 0;
}

