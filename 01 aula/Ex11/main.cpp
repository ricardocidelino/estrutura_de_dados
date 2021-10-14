#include <iostream>

using namespace std;

int main() {
	//Declara e inicializa uma matriz 3x3
	int matriz[3][3] = {
		{-1, 5, 8},
		{9, -8, -1},
		{0, 3, -5}
	};

	cout << "Matriz Original (sem modulos)" << endl;

	//Imprime todos os valores da matriz e identifica os valores negativos, trocando-os pelo seu módulo
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int n = matriz[i][j];
			cout << "[" << i << "][" << j << "]: " << n << endl;
			
			if (n < 0) { //Se for negativo, troque-o pelo seu módulo
				matriz[i][j] = (-1) * n;
			}
		}
	}

	cout << endl << "Matriz Alterada (com modulos)" << endl;

	//Imprime os valores da matriz novamente, após as correções
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "[" << i << "][" << j << "]: " << matriz[i][j] << endl;
		}
	}
	
	return 0;
}
