#include <iostream>
#include <locale>
using namespace std;

int main() {
    float nota;

	setlocale(LC_ALL, "Portuguese");

    do {
        cout << "Digite uma nota entre zero e dez: ";
        cin >> nota;

        if (nota < 0 || nota > 10) {
            cout << "Valor inválido! A nota deve estar entre zero e dez." << endl;
        }
    } while (nota < 0 || nota > 10);

    cout << "A nota informada é válida: " << nota << endl;

    return 0;
}

