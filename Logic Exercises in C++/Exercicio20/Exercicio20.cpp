#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite o segundo número: ";
	cin >> num2;
	cout << "Digite o terceiro número: ";
	cin >> num3;
	
	if(num1>num2 && num1 > num3){
		cout << "O Primeiro número é o maior sendo ele: " << num1 << endl;
		
	} else if(num2 > num1 && num2 > num3){
		cout << "O Segundo número é o maior sendo ele: " << num2 << endl;
	
	}else if(num3 > num1 && num3 > num2){
		cout << "O terceiro número é o maior sendo ele: " << num3 << endl;
	
	}else
	cout << "não tem número maior";	
	
	return 0;
}
