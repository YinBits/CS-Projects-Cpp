#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
    float num1 = 0, num2 = 0;
    int operacao;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Lista de operações: " << endl;
    cout << "1- Soma" << endl;
    cout << "2- Subtração" << endl;
    cout << "3- Multiplicação" << endl;
    cout << "4- Divisão" << endl;
    cout << "Selecione a operação que você deseja realizar: ";
    cin >> operacao;
    
    float resultado;

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            cout << "O resultado da soma é: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "O resultado da subtração é: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "O resultado da multiplicação é: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "O resultado da divisão é: " << resultado << endl;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Operação inválida!" << endl;
            return 1;
    }

    // Verifica se o resultado é par ou ímpar
    if (static_cast<int>(resultado) % 2 == 0) {
        cout << "O resultado é par." << endl;
    } else {
        cout << "O resultado é ímpar." << endl;
    }

    // Verifica se o resultado é positivo ou negativo
    if (resultado > 0) {
        cout << "O resultado é positivo." << endl;
    } else if (resultado < 0) {
        cout << "O resultado é negativo." << endl;
    } else {
        cout << "O resultado é zero." << endl;
    }

    // Verifica se o resultado é inteiro ou decimal
    if (resultado == static_cast<int>(resultado)) {
        cout << "O resultado é um número inteiro." << endl;
    } else {
        cout << "O resultado é um número decimal." << endl;
    }

    return 0;
}

