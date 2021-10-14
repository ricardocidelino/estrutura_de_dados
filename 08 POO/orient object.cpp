#include <iostream>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Aviao{
	
	public:
		int vel;
		int velMax;
		std::string tipo;
		Aviao(int tp);
		
	Aviao::Aviao(int tp);
	if (tipo == 1){
		tipo = "Jato";
		velMax=800;
	}else if(tipo ==2){
		tipo="Monomotor";
		velMax=350;		
	}else if (tp=3){
		tipo="Planador";
		velMax=180;		
	}
};


int main(int argc, char** argv) {
	Aviao av1 = new Aviao()
	avl->imprimir()
	return 0;
}
