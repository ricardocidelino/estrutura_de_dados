#include <iostream>

using namespace std;

int main() {
	//inicializa uma matriz de ordem 4
	int matriz[4][4] {
		{4, 5, 1, 3},
		{5, 8, 4, 0},
		{2, 2, 3, 9},
		{7, 1, 8, 7}
	};
	
	cout << "Imprimindo a matriz" << endl;
	
	for (int i = 0; i < 4; i ++) { //comando for correspondente �s linhas da matriz
		for (int j = 0; j < 4; j++) { //comando for correspondente �s colunas da matriz
			cout << "Matriz[" << i << "][" << j << "]: " << matriz[i][j] << endl;
		}
	}

	cout << endl << "Imprimindo valores onde (i + j) e impar" << endl;

	for (int i = 0; i < 4; i ++) {
		for (int j = 0; j < 4; j++) {
			//Se a soma entre entre linha e coluna resultar em um n�mero �mpar,
			//imprima o n�mero na respectiva posi��o (i,j)
			if ((i + j) % 2 != 0) {
				cout << "Matriz[" << i << "][" << j << "]: " << matriz[i][j] << endl;
			}
		}
	}	

	return 0;
}
