#include <iostream>

using namespace std;

int main() {
	char str[100];

	//L� a palavra a ser armazenada no array "str"
	cout << "Entre com uma palavra de no maximo 100 caracteres: ";
	cin >> str;

	//Calcula quantos caracteres a palavra digitada tem
	int posicaoMaxima;
	for (int i = 0; i < 100; i++) {
		//Se a posi��o i for o fim do array, ent�o a posi��o m�xima foi encontrada
		if (str[i] == '\0') { //'\0' delimita o fim de um array de chars
			posicaoMaxima = i - 1; //Remove um, pois o �ltimo caractere v�lido foi o anterior (este � apenas um delimitador do fim do array)
			break;
		}
	}

	//L� a posi��o do caractere a ser substitu�do	
	int posicao;
	cout << endl << "Entre com a posicao de um caracter: ";
	cin >> posicao;

	//Faz a valida��o da posi��o (deve ser entre 0 e a quantidade de caracteres da palavra digita menos 1)
	if (posicao < 0 || posicao > posicaoMaxima) {
		cout << endl << "Posicao invalida! Posicao deve ser um numero entre 0 e " << posicaoMaxima << endl;
		return 0;
	}

	//L� o novo caractere	
	char novoCaractere;
	cout << "Entre com o novo caracter da posicao " << posicao << ": ";
	cin >> novoCaractere;
	
	cout << endl << "Antigo array: " << str; //Imprime o array original
	str[posicao] = novoCaractere; //Substitui o caractere antigo pelo novo
	cout << endl << "Novo array: " << str << endl; //Imprime o array modificado
	
	return 0;
}
