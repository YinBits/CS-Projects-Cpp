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
    
    for (int i = num1+1; i < num2;++i) {
        	cout << i << " "; 	
    }


    return 0;
}

