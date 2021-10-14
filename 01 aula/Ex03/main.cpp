#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int matriz[3][4];

	//Lê os valores informados pelo usuário e os insere na matriz de ordem 3x4 acima	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			system("cls"); //Submete o comando CLS ao Sistema Operacional, para limpar a tela do prompt
		}
	}

	//Imprime todos os valores da matriz multiplicados por 3
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			int n = matriz[i][j];
			cout << n << " x 3 = " << (n * 3) << endl;
		}
	}
	
	return 0;
}
