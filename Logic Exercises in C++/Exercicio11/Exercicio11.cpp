#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float altura = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite sua altura para saber seu peso ideal: ";
	cin >> altura;
	
	float peso_ideal = (72.7*altura) - 58;
	
	cout << "Seu peso ideal é de: " << peso_ideal << endl;
	
}
