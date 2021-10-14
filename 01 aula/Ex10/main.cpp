#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int matriz[3][3], transposta[3][3];

	//Lê os valores informados pelo usuário e os insere na matriz de ordem 3x4 acima	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			system("cls"); //Submete o comando CLS ao Sistema Operacional, para limpar a tela do prompt
		}
	}

	//Criando a matriz transposta
	/*
		Exemplo de Matriz Transposta
	
		| 1 9 3 |    | 1 2 3 |
		| 2 5 2 | -> | 9 5 0 |
		| 3 0 7 |    | 3 2 7 |
	*/
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			transposta[j][i] = matriz[i][j];
		}
	}
	
	//Imprimindo a matriz original
	cout << "Matriz Original" << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "[" << i << "][" << j << "]: " << matriz[i][j] << endl;
		}
	}

	//Imprimindo a matriz transposta
	cout << endl << "Matriz Transposta" << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "[" << i << "][" << j << "]: " << transposta[i][j] << endl;
		}
	}
	
	return 0;
}
