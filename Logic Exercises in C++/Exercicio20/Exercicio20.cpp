#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << "Digite o segundo n�mero: ";
	cin >> num2;
	cout << "Digite o terceiro n�mero: ";
	cin >> num3;
	
	if(num1>num2 && num1 > num3){
		cout << "O Primeiro n�mero � o maior sendo ele: " << num1 << endl;
		
	} else if(num2 > num1 && num2 > num3){
		cout << "O Segundo n�mero � o maior sendo ele: " << num2 << endl;
	
	}else if(num3 > num1 && num3 > num2){
		cout << "O terceiro n�mero � o maior sendo ele: " << num3 << endl;
	
	}else
	cout << "n�o tem n�mero maior";	
	
	return 0;
}
