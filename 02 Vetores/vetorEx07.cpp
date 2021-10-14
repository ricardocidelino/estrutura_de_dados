#include <iostream>
#include <stdio.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[7],b[7],c[7];
    char math[7];
    int i=0;
    for(i=0;i<2;i++){
    	cout<<"numero vetor A: ";
    	cin>>a[i];
    	cout<<"Operacao(+-/*): ";
        cin>>math[i]; 
		cout<<"numero vetor B: ";
    	cin>>b[i];
    	i++;
		switch (math[i]) {
	        case '+':
	        	if (math[i] == '+'){
	        	c[i] = 	a[i]+b[i];
	        	cout<<a[i]<<math[i]<<b[i]<<" = "<<c[i];
	        	}
	        case '-':
		        if (math[i] == '-'){
		        	c[i] = a[i]-b[i];
		        	cout<<a[i]<<" - "<<b[i]<<" = "<<c[i];
		        }
	        case '*':
		        if (math[i] == '*'){
		        	c[i] = a[i]*b[i];
		        	cout<<a[i]<<" * "<<b[i]<<" = "<<c[i];
		        }
	        case '/':
		        if (math[i] == '/'){
		        	c[i] = a[i]/b[i];
		        	cout<<a[i]<<" / "<<b[i]<<" = "<<c[i];
		        }
	    }	
    } 
	return 0;
}
