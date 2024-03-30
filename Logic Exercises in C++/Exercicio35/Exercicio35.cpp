#include <iostream>
#include <locale>
using namespace std;

int main() {
	int num1 = 0, num2 = 0;

	setlocale(LC_ALL,"Portuguese");

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    int elevado = 1;
    
    for (int i = 0; i < num2;++i) {
    		 elevado *= num1;
        
    }
    	cout << "o valor do número " << num1 << " elevado a "<< num2<< " é de: " << elevado;


    return 0;
}

