#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	char sexo = ' ';
	
	cout << "Digite M ou F: ";
	cin >> sexo;
	
	if(sexo == 'M' || sexo == 'm'){
		cout << "Masculino" << endl;
	}else if(sexo == 'F' || sexo == 'f'){
		cout << "Feminino" << endl;
	}else
	cout << "Sexo Invalido" << endl;
}
