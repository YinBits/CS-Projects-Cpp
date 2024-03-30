#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
int main(){
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite um numero: ";
	cin >> num;
	
	if(num>0){
		cout <<	"O número digitado é positivo";
	} else
		cout << "o número digitado é negativo";
}
