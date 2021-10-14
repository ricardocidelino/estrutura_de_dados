#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int matrizA[4][4], matrizB[4][4];

	//Lê os valores informados pelo usuário e os insere na matriz A de ordem 4x4 acima
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "] na matriz A: ";
			cin >> matrizA[i][j];
			
			system("cls"); //Submete o comando CLS ao Sistema Operacional, para limpar a tela do prompt
		}
	}
	
	//Realiza o mesmo procedimento acima, mudando o destino (invés de matrizA, agora é matrizB)
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "] na matriz B: ";
			cin >> matrizB[i][j];
			
			system("cls");
		}
	}

	//Imprime a soma entre os elementos das duas matrizes
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int valA = matrizA[i][j];
			int valB = matrizB[i][j];
			
			cout << valA << " + " << valB << " = " << (valA + valB) << endl;
		}
	}
	
	return 0;
}
