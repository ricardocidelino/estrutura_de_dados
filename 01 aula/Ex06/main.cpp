#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int matriz[3][3];

	//Lê os valores informados pelo usuário e os insere na matriz de ordem 3x3 acima	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			system("cls"); //Submete o comando CLS ao Sistema Operacional, para limpar a tela do prompt
		}
	}

	//Considera como menor número o primeiro valor da matriz.
	int linha = 0, menor = matriz[0][0];

	//Procura pelo menor número dentro da estrutura, além de imprimir todos os números da matriz
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//Se o valor da posição (i,j) é menor que a variável "menor", então
			//atualiza a variável e a linha do menor número
			if (matriz[i][j] < menor) {
				menor = matriz[i][j];
				linha = i;
			}
			
			cout << "[" << i << "][" << j << "]: " << matriz[i][j] << endl;
		}
	}
	
	cout << endl << "O menor numero da matriz 3x3 e " << menor;
	cout << " localizado na linha " << linha << endl;
	
	return 0;
}
