#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	float nota1 = 0;
	float nota2 = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	float media = (nota1 + nota2) / 2; 
	
	if(media == 10){
		cout << "Aluno Aprovado com Distinção" << endl;
		
	}else if(media >= 7){
		cout << "Aluno Aprovado" << endl;
	}else
		cout << "Aluno Reprovado" << endl;
	
	return 0;
}
