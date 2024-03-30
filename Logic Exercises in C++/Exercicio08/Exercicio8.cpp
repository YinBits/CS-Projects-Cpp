#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float salPorHrs = 0;
	int hrsTrabalhada = 0;

	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite quanto você ganha por hora: ";
	cin >> salPorHrs;
	
	cout << "Digite quantas horas você trabalhou este mês: ";
	cin >> hrsTrabalhada;
	
	float salario = salPorHrs * hrsTrabalhada;

	cout << "Seu salário total é de: " << salario;
}

