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

	if(num1 > num2 && num1 > num3 && num2<num3){
	cout << "O primeiro n�mero � o maior e o segundo n�mero � o menor";
	
	}else if(num1 > num2 && num1 > num3 && num3<num2){
	cout << "O primeiro n�mero � o maior e o terceiro n�mero � o menor";
	
	}else if(num2 > num1 && num2 > num3 && num1<num3){
	cout << "O segundo n�mero � o maior e o primeiro n�mero � o menor";
	
	}else if(num2> num1 && num2 > num3 && num3<num1){
	cout << "O segundo n�mero � o maior e o terceiro n�mero � o menor";
	
	}else if(num3 > num1 && num3 > num2 && num1<num2){
	cout << "O terceiro n�mero � o maior e o primeiro n�mero � o menor";
	
	}else if(num3 > num1 && num3 > num1 && num2<num1){
	cout << "O terceiro n�mero � o maior e o segundo n�mero � o menor";
	
	}else if (num1 > num2 && num1 > num3 && num2==num3){
		cout << "O primeiro n�mero � o maior e n�o tem n�mero menor";
		
	}else if (num2 > num1 && num2 > num3 && num1==num3){
		cout << "o segundo n�mero � o maior e n�o tem n�mero menor";
	}else if (num3 > num2 && num3 > num1 && num2==num1){
		cout << "O terceiro n�mero � o maior e n�o tem n�mero menor";
	}else 
	cout << "Os n�meros s�o iguais";
	
return 0;
}
