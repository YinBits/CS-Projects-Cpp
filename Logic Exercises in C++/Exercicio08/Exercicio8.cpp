#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float salPorHrs = 0;
	int hrsTrabalhada = 0;

	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite quanto voc� ganha por hora: ";
	cin >> salPorHrs;
	
	cout << "Digite quantas horas voc� trabalhou este m�s: ";
	cin >> hrsTrabalhada;
	
	float salario = salPorHrs * hrsTrabalhada;

	cout << "Seu sal�rio total � de: " << salario;
}

