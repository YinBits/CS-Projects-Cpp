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
		cout <<	"O n�mero digitado � positivo";
	} else
		cout << "o n�mero digitado � negativo";
}
