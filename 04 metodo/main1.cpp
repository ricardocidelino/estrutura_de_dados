#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float celcius(float x){
	float convert_a = (x * 9/5) + 32;
	return convert_a;
}

float fahrenheit(float y){
	float convert_b = (y - 32) * 5/9;
	return convert_b;
}


int main(int argc, char** argv) {
		float x, y,convert_a,convert_b;
		cout<<"Digite o valor em celcius para convers�o em Fahrenheit: ";
		cin>>x;
		cout<<"Digite o valor em Fahrenheit para convers�o em Celcius: ";
		cin>>y;
		
		cout<<"Convers�o para F�: "<<celcius(x)<<endl;
		cout<<"Convers�o para C�"<<fahrenheit(y)<<endl;
	return 0;
}
