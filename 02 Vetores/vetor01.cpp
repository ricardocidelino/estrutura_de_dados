#include <iostream>
#include <stdio.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,vetor [10],rotev[10];
	//loop para preencher o vetor
	while( i <= 10){
		cout<<"Digite o " <<i<< "º valor: "<<endl; 
		cin>>vetor[i];		
		if(vetor[i] < 0){
			cout<<"fim";
			break;
		}
		else{
			i++; 
			rotev[i]=vetor[i]*(-1);
			cout<<"Entrada de dados"<<i<<"para o vetor"<<endl; 
		}
	}
	 cout<<rotev[10];	
	return 0;
}
