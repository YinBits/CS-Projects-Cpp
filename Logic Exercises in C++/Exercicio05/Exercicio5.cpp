#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	
	float metros = 0;
	float cm = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite quantos metros deseja converter para cent�metros: ";
	cin >> metros;
	
	cm = metros * 100;
	
	cout << metros << " metros � igual a " << cm << "cm";
	}
