#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float raio = 0;
	float area = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o raio do seu c�rculo: ";
	cin >> raio;
	
	area = (2*3.14)*raio;
	
	cout << "A �rea do seu c�ruclo � de: " << area;
}
