#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o um n�mero de 1 a 7: ";
	cin >> num;
	
	switch(num){
		case 1 : 
			cout << "Domingo" << endl;
			break;
		case 2 : 
			cout << "Segunda-feira" << endl;
			break;
		case 3 : 
			cout << "Ter�a-Feira" << endl;
			break;
		case 4 : 
			cout << "Quarta-feira" << endl;
			break;
		case 5 : 
			cout << "Quinta-Feira" << endl;
			break;
		case 6 : 
			cout << "Sexta-Feira" << endl;
			break;
		case 7 : 
			cout << "S�bado" << endl;
			break;
		default:
            cout << "Valor invalido!" << endl;
	}


    return 0;
}

