#include <iostream>
#include <locale>
using namespace std;

int main() {
	int num1 = 0, num2 = 0;

	setlocale(LC_ALL,"Portuguese");

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    
    int elevado = 1;
    
    for (int i = 0; i < num2;++i) {
    		 elevado *= num1;
        
    }
    	cout << "o valor do n�mero " << num1 << " elevado a "<< num2<< " � de: " << elevado;


    return 0;
}

