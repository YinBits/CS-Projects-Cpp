#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
	int num1;
	int num2;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite o segundo número: ";
	cin >> num2;
	
	if(num1>num2){
		cout <<"O primeiro número é maior: " << num1;
	}else
	cout << "O segundo número é maior: " << num2;
}
