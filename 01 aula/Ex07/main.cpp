#include <iostream>
#include <math.h>

using namespace std;

int main() {
	//Array de floats, pois se fosse de int a parte decimal na divisão seria desconsiderada pelo processador
	float notas[4];

	//Lê as notas do aluno, uma a uma
	cout << "Por favor, entre com a primeira nota do aluno: ";
	cin >> notas[0];
	
	cout << endl << "Por favor, entre com a segunda nota do aluno: ";
	cin >> notas[1];
	
	cout << endl << "Por favor, entre com a terceira nota do aluno: ";
	cin >> notas[2];
	
	cout << endl << "Por favor, entre com a media dos exercicios do aluno: ";
	cin >> notas[3];

	//Calcula a média, associado o resultado a uma variável do tipo float (para guardar a parte decimal do cálculo)
	float media = (notas[0] + notas[1] * 2 + notas[2] * 3 + notas[3]) / 7;
	
	//Arredonda a média para duas casas decimais. 
	//A multiplicação garante a quantidade de "casas decimais". 
	//O floorf truncará toda a parte decimal, deixando apenas a parte inteira.
	//A divisão servirá para voltar a parte inteira à decimal.
	media = floorf(media * 100) / 100;
	
	cout << endl << "Media: " << media;

	//Verifica o conceito do aluno e imprime o resultado conforme a sua média	
	if (media >= 9) {
		cout << ". Conceito A (9 - 10)";
	} else if (media >= 7.5) {
		cout << ". Conceito B (7.5 - 9)";
	} else if (media >= 6) {
		cout << ". Conceito C (6 - 7.5)";
	} else if (media >= 4) {
		cout << ". Conceito D (4 - 6)";
	} else {
		cout << ". Conceito E (0 - 4)";
	}
	
	cout << endl;
	
	return 0;
}
