// 1.Crie um programa que solicite ao usu�rio os tr�s coeficientes de uma equa��o do segundo grau 
// e informe os valores de x' e x''.
#include<iostream>
#include <math.h>
using namespace std;

/* Escreva um m�todo que receba como par�metros um vetor de inteiros 
e o tamanho deste vetor e retorne a m�dia dos valores deste vetor.*/

float vetorInt(int x[], int tam){
	
	float soma = 0;
	
	for(int p=0;p=tam;p++){
		soma=soma+x[p];
	}	
	return soma/tam;
}


int main (){
 	int tam;
 	cout<<"Digite o tamanho do vetor: ";
	cin>>tam;
	int vet[tam];
 	
 	//popular o vetor 	
 	for(int i=0;i<=tam;i++){
 		cout<<"Digite o "<<i<<" item do vetor: ";
		cin>>vet[i]; 	
	} 	
 	 
	cout<<vetorInt(vet,tam);
	
	return 0;
} 
 
