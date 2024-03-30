#include <iostream>
#include <locale>
using namespace std;

int main() {
	

	setlocale(LC_ALL,"Portuguese");

    cout << "Números ímpares entre 1 e 50: " << endl;
    for (int i = 0; i < 50; ++i) {
        if(i%2!=0){
        	cout << i << " ";
		}
    }


    return 0;
}

