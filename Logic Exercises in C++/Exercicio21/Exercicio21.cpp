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

	if(num1 > num2 && num1 > num3 && num2<num3){
	cout << "O primeiro número é o maior e o segundo número é o menor";
	
	}else if(num1 > num2 && num1 > num3 && num3<num2){
	cout << "O primeiro número é o maior e o terceiro número é o menor";
	
	}else if(num2 > num1 && num2 > num3 && num1<num3){
	cout << "O segundo número é o maior e o primeiro número é o menor";
	
	}else if(num2> num1 && num2 > num3 && num3<num1){
	cout << "O segundo número é o maior e o terceiro número é o menor";
	
	}else if(num3 > num1 && num3 > num2 && num1<num2){
	cout << "O terceiro número é o maior e o primeiro número é o menor";
	
	}else if(num3 > num1 && num3 > num1 && num2<num1){
	cout << "O terceiro número é o maior e o segundo número é o menor";
	
	}else if (num1 > num2 && num1 > num3 && num2==num3){
		cout << "O primeiro número é o maior e não tem número menor";
		
	}else if (num2 > num1 && num2 > num3 && num1==num3){
		cout << "o segundo número é o maior e não tem número menor";
	}else if (num3 > num2 && num3 > num1 && num2==num1){
		cout << "O terceiro número é o maior e não tem número menor";
	}else 
	cout << "Os números são iguais";
	
return 0;
}
