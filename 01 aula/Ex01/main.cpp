#include <iostream>

using namespace std;

int main() {
	//inicializa uma matriz de ordem 5
	int matriz[5][5] = {
		{6, 2, 9, 0, 1},
		{2, 9, 1, 9, 3},
		{3, 6, 0, 2, 4},
		{6, 1, 3, 3, 9},
		{8, 7, 5, 8, 2}
	};
	
	cout << "Imprimindo a matriz" << endl;

	for (int i = 0; i < 5; i++) { //comando for correspondente às linhas da matriz
		for (int j = 0; j < 5; j++) { //comando for correspondente às colunas da matriz
			cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << endl;
		}
	}
	
	cout << endl << "Imprimindo os numeros impares" << endl;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			/*
				Verifica se o número é ímpar (resto da divisão por 2 diferente de 0). Exemplos:
				3 % 2 = 1 (pois 3 / 2 apresenta quociente 1 e resto 1). Este é ímpar
				8 % 2 = 0 (pois 8 / 2 apresenta quociente 4 e resto 0). Este não é ímpar
			*/
			if (matriz[i][j] % 2 != 0) {
				cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << endl;
			}
		}
	}
	
	return 0;
}
