#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
	
	float farenheit = 0;
	float celsius = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite a temperatura em Farenheit: ";
	cin >> farenheit;
	
	celsius = 5*(farenheit-32)/9;
	
	cout << "A temperatura em Celsius é de: " << celsius << "°C" << endl;

}
