#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	int num1;
	int num2;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << "Digite o segundo n�mero: ";
	cin >> num2;
	
	if(num1>num2){
		cout <<"O primeiro n�mero � maior: " << num1;
	}else
	cout << "O segundo n�mero � maior: " << num2;
}
