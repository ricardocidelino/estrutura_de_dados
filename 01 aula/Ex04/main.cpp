#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int matriz[4][5];

	//Lê os valores informados pelo usuário e os insere na matriz de ordem 4x5 acima	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "Digite o numero do indice [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
			
			system("cls"); //Submete o comando CLS ao Sistema Operacional, para limpar a tela do prompt
		}
	}

	int soma = 0;

	//Soma todos os elementos da matriz
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			int n = matriz[i][j];
			soma += n; //Isso é equivalente à soma = soma + n;
		}
	}
	
	cout << "A soma entre todos os elementos da matriz e: " << soma << endl;
	
	return 0;
}
