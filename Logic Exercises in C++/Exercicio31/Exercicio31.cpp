#include <iostream>
#include <locale>
using namespace std;

int main() {
    int numero;
    int maior;

	setlocale(LC_ALL, "Portuguese");
   
    cout << "Digite o primeiro número: ";
    cin >> maior;


    for (int i = 1; i < 5; ++i) {
        cout << "Digite o próximo número: ";
        cin >> numero;
        
        if (numero > maior) {
            maior = numero;
        }
    }

  
    cout << "O maior número é: " << maior << endl;

    return 0;
}

