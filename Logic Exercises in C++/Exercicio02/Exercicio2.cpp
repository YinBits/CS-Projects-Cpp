#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um número: ";
	cin >> numero;
	
	cout << "O número informado foi " << numero <<endl;
}
