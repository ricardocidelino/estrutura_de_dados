// 1.Crie um programa que solicite ao usuário os três coeficientes de uma equação do segundo grau 
// e informe os valores de x' e x''.
#include<iostream>
#include <math.h>
using namespace std;

int main (){
	
	float a, b, c, delta, raiz1, raiz2,x1,x2;
	
	cout << "informe o valor de A: ";
	cin >> a;
	cout << "informe o valor de B: ";
	cin >> b;	
	cout << "informe o valor de C: ";
	cin >> c;	
	
	if ((b*b)- (4 * a * c)  < 0 )   {
        cout << "a equacao nao possui solucoes reais";}
    else {
        x1 = (-b + (sqrt((b*b)- (4 * a * c))) / (2 * a ));
        x2 = (-b - (sqrt((b*b)- (4 * a * c))) / (2 * a ));
        cout << "as solucoes sao" <<  x1 << " , " << x2 << endl;
    }
		
	return 0;
}
