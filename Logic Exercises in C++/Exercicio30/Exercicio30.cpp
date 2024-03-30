#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Número de 1 a 20, um abaixo do outro: " << endl;
	for (int i =1; i<=20; i++){
		cout << i << endl;
	}
	
		cout << "Número de 1 a 20, um lado a lado: " << endl;
	for (int i =1; i<=20; i++){
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
	
}
