#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	int num1=0, num2=0;
	float num3 = 0;
	
	setlocale(LC_ALL, "Portuguese");	
	cout << "Digite o primeiro número inteiro: ";
	cin >> num1;
	
	cout << "Digite o segundo número inteiro: ";
	cin >> num2;
	cout << "Digite o terceiro número sendo ele real: ";
	cin >> num3;
	
	float produto = (2*num1) * num2/2;
	float soma = (3*num1) + num3;
	float elevacao = pow(num3, 3);
	
	cout << "O produto do dobro do primeiro com metade do segundo é de: " << produto << endl;
	cout << "A soma do triplo do primeiro com o terceiro: " << soma << endl;
	cout << "O terceiro elevado ao cubo: " << elevacao << endl;
	
	return 0;
}
