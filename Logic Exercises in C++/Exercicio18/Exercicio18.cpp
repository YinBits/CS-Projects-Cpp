#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	char letra = ' ';
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	if (letra == 'a' 	|| letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
		
		cout << "A letra digitada é vogal";
		
	}else
		cout << "A letra digitada é consoante";
}
