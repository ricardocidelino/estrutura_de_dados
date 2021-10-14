#include <iostream>
#include <stdio.h> 
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void busca_bin(int vetor[], procurar){
	int inicio = 0;
	int tam_vet = vt -1;
	int posicao = 0;
	while(inicio <= tam_vet){
		posicao=(inicio+tam_vet)/2;
		if(vetor[posicao]==procurar){
			return posicao;
		}else{
			if(vetor[posicao]>procurar){
				tam_vet=posicao-1;
			}else{
				inicio=posicao+1;
			}
		}
		
	}
}


void bolhaSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)           
    
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
  
/* imprimir */
void imprimir(int vetor[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << vetor[i] << " "; 
    cout << endl; 
} 
  
 
int main() 
{ 
    int vetor[5]; 
    int n = sizeof(vetor)/sizeof(vetor[0]); 
	for(int i = 0 ; i <= 4; i++){
		cout<<"Digite um numero \n";
		cin>> vetor[i];
	}

    bolhaSort(vetor, n); 
    cout<<"Vetor ordenado: \n"; 
    imprimir(vetor, n); 
	busca_bin(vetor,procurar);
    return 0; 
} 
