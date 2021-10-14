#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int matriz[3][3];

	//L� os valores informados pelo usu�rio e os insere na matriz de ordem 3x3 acima	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			system("cls"); //Submete o comando CLS ao Sistema Operacional, para limpar a tela do prompt
		}
	}

	//Considera como menor n�mero o primeiro valor da matriz.
	int linha = 0, menor = matriz[0][0];

	//Procura pelo menor n�mero dentro da estrutura, al�m de imprimir todos os n�meros da matriz
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//Se o valor da posi��o (i,j) � menor que a vari�vel "menor", ent�o
			//atualiza a vari�vel e a linha do menor n�mero
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
