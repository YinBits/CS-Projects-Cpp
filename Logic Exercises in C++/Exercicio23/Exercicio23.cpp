#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	int num1 = 0, num2 = 0 , num3 = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite o segundo número: ";
	cin >> num2;
	cout << "Digite o terceiro número: ";
	cin >> num3;
	
if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            cout << "Os numeros em ordem decrescente sao: " << num1 << ", " << num2 << ", " << num3 << endl;
        } else {
            cout << "Os numeros em ordem decrescente sao: " << num1 << ", " << num3 << ", " << num2 << endl;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            cout << "Os numeros em ordem decrescente sao: " << num2 << ", " << num1 << ", " << num3 << endl;
        } else {
            cout << "Os numeros em ordem decrescente sao: " << num2 << ", " << num3 << ", " << num1 << endl;
        }
    } else {
        if (num1 >= num2) {
            cout << "Os numeros em ordem decrescente sao: " << num3 << ", " << num1 << ", " << num2 << endl;
        } else {
            cout << "Os numeros em ordem decrescente sao: " << num3 << ", " << num2 << ", " << num1 << endl;
        }
    }

    return 0;
}

