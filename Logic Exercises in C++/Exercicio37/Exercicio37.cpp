#include <iostream>
#include <locale>

using namespace std;

int main() {
    int numero;
    int fatorial = 1;

	setlocale(LC_ALL, "Portuguese");
	
    cout << "Digite um número inteiro para calcular o fatorial: ";
    cin >> numero;

    for (int i = numero; i >= 1; --i) {
        fatorial *= i;
    }


    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}

