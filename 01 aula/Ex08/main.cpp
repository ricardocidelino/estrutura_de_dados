#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cout << "Digite um numero impar e maior que 1: ";
	cin >> n;

	//Verifica se a entrada é um número ímpar, primordial para o adequado funcionamento do algoritmo	
	if (n <= 1 || n % 2 == 0) {
		cout << endl << "Voce nao digitou um numero impar!" << endl;
		return 0;
	}
	
	cout << endl;

	//Declara e inicializa o array contendo todos os números entre 1 e n
	int array[n];
	for (int i = 0; i < n; i++) {
		array[i] = (i + 1);
	}

	int linhas = (n + 1) / 2; //Quantidade de linhas da pirâmide

	for (int i = 0; i < linhas; i++) {
		//Define a largura dos campos de cada linha da pirâmide
		//Dessa forma o efeito causado será o de que os números serão deslocados em (i + 1) colunas para a direita
		cout << setw(i + 1);

		//Inicia em i e termina em n - 1 para desconsiderar os extremos de cada linha
		//Se, por exemplo, n = 9 e i = 1, então os extremos a serem desconsiderados serão os números 1, 2 e 8, 9
		for (int j = i; j < n - i; j++) {
			cout << array[j];
		}
		
		cout << endl;
	}
	
	return 0;
}
