#include <iostream>
#include <stdio.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float vetor[8] = {4,7,5,2,1,8,3,6},mirror;
	int x,y;
	cout<<"Exibindo vetor sem a ordem:"<<endl;
	for(x=0;x<9;x++){
		cout<<vetor[x]<<" ";		
	}	
	cout<<"\nExibindo vetor ordenado:"<<endl;
	for(x=0;x<9;x++){
		for(y=x+1;y<9;y++){
			if(vetor[x]>vetor[y]){
				mirror=vetor[x];
				vetor[x]=vetor[y];
				vetor[y]=mirror;
			}			
		}
	}
	for(x=0;x<9;x++){
		cout<<vetor[x]<<" ";
	}
	cout<<endl;
	return 0;
}
