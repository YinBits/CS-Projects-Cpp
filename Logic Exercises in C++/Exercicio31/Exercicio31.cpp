#include <iostream>
#include <locale>
using namespace std;

int main() {
    int numero;
    int maior;

	setlocale(LC_ALL, "Portuguese");
   
    cout << "Digite o primeiro n�mero: ";
    cin >> maior;


    for (int i = 1; i < 5; ++i) {
        cout << "Digite o pr�ximo n�mero: ";
        cin >> numero;
        
        if (numero > maior) {
            maior = numero;
        }
    }

  
    cout << "O maior n�mero �: " << maior << endl;

    return 0;
}

