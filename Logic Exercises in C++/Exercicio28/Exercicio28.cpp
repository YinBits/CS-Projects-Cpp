#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	int respostas_positivas = 0;
	string resposta;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Responda as perguntas com 'sim' ou 'n�o':"<<endl;
	
	cout << "1. Telefonou para a v�tima? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
		
	}
	
	cout << "2. Esteve no local do crime? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;	
	};	
	cout << "3. Mora perto da v�tima? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
	}
	
	cout << "4. Devia para a v�tima? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
	}
	
	cout << "5. J� trabalhou com a v�tima? ";;
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
		
	}
	
	if(respostas_positivas == 2){
		cout << "Voc� � classificado como 'Suspeita'." << endl; 
		
	}else if(respostas_positivas >=3 && respostas_positivas <=4){
		cout << "Voc� � classificado como 'C�mplice'." << endl;
		
	}else if(respostas_positivas == 5){
		cout << "Voc� � classificado como 'Assassino'." << endl;
	}else{
		cout << "Voc� � clasificado como 'Inocente'."<< endl;
	}
	
}
