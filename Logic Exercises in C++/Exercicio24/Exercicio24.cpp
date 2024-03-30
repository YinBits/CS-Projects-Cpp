#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	char turno = ' ';
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Qual turno você estuda? (M-Matutino, V-Vespertino ou N- Noturno): ";
	cin >> turno;

	if(turno == 'm' || turno == 'M'){
		cout << "Bom dia!";
		
	}else if(turno == 'v' || turno == 'V'){
		cout << "Boa Tarde!";
		
	}else if(turno == 'n' || turno == 'N'){
		cout << "Boa Noite!";
		
		}else
			cout << "Turno não reconhecido!";

    return 0;
}

