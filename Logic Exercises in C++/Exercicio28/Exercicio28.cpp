#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	int respostas_positivas = 0;
	string resposta;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Responda as perguntas com 'sim' ou 'não':"<<endl;
	
	cout << "1. Telefonou para a vítima? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
		
	}
	
	cout << "2. Esteve no local do crime? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;	
	};	
	cout << "3. Mora perto da vítima? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
	}
	
	cout << "4. Devia para a vítima? ";
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
	}
	
	cout << "5. Já trabalhou com a vítima? ";;
	cin >> resposta;
	if(resposta == "sim"){
		respostas_positivas++;
		
	}
	
	if(respostas_positivas == 2){
		cout << "Você é classificado como 'Suspeita'." << endl; 
		
	}else if(respostas_positivas >=3 && respostas_positivas <=4){
		cout << "Você é classificado como 'Cúmplice'." << endl;
		
	}else if(respostas_positivas == 5){
		cout << "Você é classificado como 'Assassino'." << endl;
	}else{
		cout << "Você é clasificado como 'Inocente'."<< endl;
	}
	
}
