#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	float area = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite qual � a �rea em m� que ser� pintada: ";
	cin >> area;
	
	float litros = ceil(area/3.00);
	
	float latas = ceil(litros/18);
	
	float preco = latas * 80.00;
	
	cout << "A Quantidade de lata necess�ria � de: " << latas << ". E o valor � de: R$ " << preco << endl;
	
}
