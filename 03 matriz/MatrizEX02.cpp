#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	int matriz[3][5];	
	int soma_linha[3]={0,0,0};
	
	for (int l=0;l<3;l++){			
		for (int c=0;c<5;c++){
			cout<<"Digite o numero "<<l<<" na posicao "<<c<<" : ";
			cin>>matriz[c][l];					
		}
	}
	for(int l= 0; l<3; l++){
		for(int c= 0; c<5; c++){
			
			soma_linha[l] += matriz[l][c];
		}
	}
	
	for(int i= 0; i<3;i++){
		cout << "Soma da linha "<< i<< ": " << soma_linha[i] << "\n";
	}	
	
	return 0;
}
