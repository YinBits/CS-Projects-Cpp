#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	float produto1;
	float produto2;
	float produto3;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o pre�o do primeiro produto: ";
	cin >> produto1;
	cout << "Digite o pre�o do segundo produto: ";
	cin >> produto2;
	cout << "Digite o pre�o do terceiro produto: ";
	cin >> produto3;
	
	if(produto1 < produto2 && produto1 < produto3 ){
		cout << "Compre o primeiro produto";
	
	}else if(produto2 < produto1 && produto2 < produto3 ){
		cout << "Compre o segundo produto";
		
	}else if(produto3 < produto2 && produto3 < produto1 ){
		cout << "Compre o terceiro produto";
		
		}else
		cout << "N�o tem diferen�a de pre�o entres os produtos";
	
}
