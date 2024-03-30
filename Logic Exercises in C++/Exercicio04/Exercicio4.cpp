#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	int nota1 = 0;
	int nota2 = 0;
	int nota3 = 0;
	int nota4 = 0;
	int media = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite a nota do primeiro bimestre: ";
	cin >> nota1;
	
	cout << "Digite a nota do segundo bimestre: ";
	cin >> nota2;
	
	cout << "Digite a nota do terceiro bimestre: ";
	cin >> nota3;
	
	cout << "Digite a nota do quarto bimestre: ";
	cin >> nota4;
	
	media = (nota1+ nota2 + nota3 + nota4)/4;
	
	cout << "a media é de: " << media << endl;
}
