#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um n�mero: ";
	cin >> numero;
	
	cout << "O n�mero informado foi " << numero <<endl;
}
