#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float quadrado = 0;
	float area = 0;
	
	setlocale(LC_ALL, "Portuguese");

	cout << "Digite o tamanho de um dos lado de seu quadrado: ";
	cin >> quadrado;
	
	area = (quadrado*quadrado)*2;
	
	cout << "O dobro da área do seu quadrado é de: " << area << endl;

}
