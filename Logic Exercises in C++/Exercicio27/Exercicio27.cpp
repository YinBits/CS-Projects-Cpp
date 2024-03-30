#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
    float num1 = 0, num2 = 0;
    int operacao;
    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Lista de opera��es: " << endl;
    cout << "1- Soma" << endl;
    cout << "2- Subtra��o" << endl;
    cout << "3- Multiplica��o" << endl;
    cout << "4- Divis�o" << endl;
    cout << "Selecione a opera��o que voc� deseja realizar: ";
    cin >> operacao;
    
    float resultado;

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            cout << "O resultado da soma �: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "O resultado da subtra��o �: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "O resultado da multiplica��o �: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "O resultado da divis�o �: " << resultado << endl;
            } else {
                cout << "Erro: Divis�o por zero!" << endl;
            }
            break;
        default:
            cout << "Opera��o inv�lida!" << endl;
            return 1;
    }

    // Verifica se o resultado � par ou �mpar
    if (static_cast<int>(resultado) % 2 == 0) {
        cout << "O resultado � par." << endl;
    } else {
        cout << "O resultado � �mpar." << endl;
    }

    // Verifica se o resultado � positivo ou negativo
    if (resultado > 0) {
        cout << "O resultado � positivo." << endl;
    } else if (resultado < 0) {
        cout << "O resultado � negativo." << endl;
    } else {
        cout << "O resultado � zero." << endl;
    }

    // Verifica se o resultado � inteiro ou decimal
    if (resultado == static_cast<int>(resultado)) {
        cout << "O resultado � um n�mero inteiro." << endl;
    } else {
        cout << "O resultado � um n�mero decimal." << endl;
    }

    return 0;
}

