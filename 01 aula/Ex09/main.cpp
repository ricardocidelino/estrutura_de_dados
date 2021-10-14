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
	
	//Lê o número que multiplicará a linha ou a coluna
	int numero;
	cout << "Digite um numero: ";
	cin >> numero;

	//Lê a resposta do usuário em relação ao que multiplicar (se será a linha ou a coluna)	
	char resposta;
	cout << endl << "Voce deseja multiplar o numero anterior pela linha (l) ou coluna (c) da matriz? ";
	cin >> resposta;
	
	//Se a resposta não for válida (nem l e nem c), então encerra o programa
	if (resposta != 'l' && resposta != 'c') {
		cout << endl << "Resposta invalida! Aceita-se apenas l (linha) ou c (coluna) " << endl;
		return 0;
	}
	
	//Caso contrário, continue com a sua execução, perguntando o índice da linha ou coluna
	int indice;
	cout << endl << "Entre com o indice da " << (resposta == 'l' ? "linha" : "coluna") << " da matriz (entre 0 e 2): ";
	cin >> indice;

	//Se o índice digitado pelo usuário	for inválido, então encerre o programa
	if (indice < 0 || indice > 2) {
		cout << endl << "Indice invalido! Aceita-se apenas 0, 1 ou 2" << endl;
		return 0;
	}
	
	system("cls");
	
	//Imprime todos os valores da matriz
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int n = matriz[i][j];
			cout << "[" << i << "][" << j << "]: " << n << endl;
		}
	}

	cout << endl;

	//Imprime os resultados da multiplicação conforme a escolha do usuário	
	if (resposta == 'l') {
		cout << "Linha " << indice << " multiplicada por " << numero << endl;

		//Se a escolha foi a linha, então a linha será fixa e os valores serão encontrados nas colunas da matriz
		for (int j = 0; j < 3; j++) {
			cout << "[" << indice << "][" << j << "]: " << (matriz[indice][j] * numero) << endl;
		}
	} else {
		cout << "Coluna " << indice << " multiplicada por " << numero << endl;
		
		//Já se a escolha foi a coluna, então esta é quem será fixa e os valores serão encontrados nas linhas
		for (int i = 0; i < 3; i++) {
			cout << "[" << i << "][" << indice << "]: " << (matriz[i][indice] * numero) << endl;
		}
	}
	
	return 0;
}
