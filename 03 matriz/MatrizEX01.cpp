#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	int mat [4][4];
	int soma;
	cout<<"Digite os valores para entrar na matriz:\n";
	
	for(int l=0;l<4;l++){
		for(int c=0;c<4;c++){	
			cout << "Insira um valor na matriz " << l << " " << c << ": ";
			cin>>mat[l][c];
			
			if(l==c){
				soma += mat [l][c];
			}	
		}		
	}
		
	cout<<"Resultado: "<<soma<<endl;
	return 0;
}
