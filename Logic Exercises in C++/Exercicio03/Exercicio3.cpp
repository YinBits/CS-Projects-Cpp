#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	int soma = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	
	cout << "Digite o segundo número: ";
	cin >> num2;
	
	soma = num1 + num2;
	
	cout << "A somas do número são: " << soma;
	
	
}
