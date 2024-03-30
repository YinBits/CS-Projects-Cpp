#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float peso_peixe = 0;
	
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite o peso dos peixes: ";
	cin >> peso_peixe;
	
	if(peso_peixe > 50){
		float excesso = peso_peixe - 50;
		float valor_multa = excesso * 4.00;
		
		cout << "O valor da multa é de: R$ " << valor_multa << endl;
	}else 
		cout <<  "Você não pagará multa devido o peso não utrapassou os 50 quilos permitidos" << endl;	
	
}
