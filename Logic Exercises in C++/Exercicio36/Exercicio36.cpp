#include <iostream>
#include <locale>
using namespace std;

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

	setlocale(LC_ALL, "Portuguese");
	
    cout << "Digite 10 números inteiros:" << endl;

    for (int i = 0; i < 10; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numero;


        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

   
    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;

    return 0;
}

