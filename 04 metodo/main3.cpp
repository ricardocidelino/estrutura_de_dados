#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float master(float potencia_a, float potencia_b){
	
	float soma = potencia_a + potencia_b;

	float num1(float x){
		float potencia_a = pow(x, 2.0);
		return potencia_a;
	}
	
	float num2(float y){
		float potencia_b = pow(y, 2.0);
		return potencia_b;
	}
	
	return soma;
}

int main(int argc, char** argv) {
		int x, y;
		float potencia_a,potencia_b;
		cout<<"Digite o valor A: ";
		cin>>x;
		cout<<"Digite o valor B: ";
		cin>>y;
		
		cout<<"Quadrado de A: "<<num1(x)<<endl;
		cout<<"Quadrado de B: "<<num2(y)<<endl;
		cout<<"Soma: "<<master(potencia_a,potencia_b)<<endl;
	return 0;
}
