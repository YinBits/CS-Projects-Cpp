#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float altura = 0;
	char genero = ' ';
	float peso_ideal = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite seu Género(M para masculino - F para feminino): ";
	cin >> genero;
	cout << "Digite sua altura para saber seu peso ideal: ";
	cin >> altura;
	
	if(genero == 'M'){
		peso_ideal= (72.7*altura) - 58;
	
	} else
		 peso_ideal = (62.1*altura) - 44-7;
	
	
	cout << "Seu peso ideal é de: " << peso_ideal << endl;
	
}
