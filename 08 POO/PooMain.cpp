#include <iostream>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Triangulo{
	
	public:
		int a, b, c;
		
	void entrada(){
		cout<<"Digite: ";
		cin>>a>>b>>c;
	}
	int verificar(){
		if (c > a + b && a > b + c && b > a + c ){
			return "N�o forma um tri�ngulo\n";
		}else{
			return "Forma tri�ngulo"
		}			
	}
	
	void tipoT(){		{
		}else if( (a==b) && (b==c) ){		
	        return "Equil�tero\n";
	    }else if{( (a!=b) && (a!=c) && (b!=c))
	        return "Escaleno\n";
	    
		}else{
	    	return "Is�sceles\n";
		}	        
	}
};


int main(int argc, char** argv) {
	matematica r1;
	r1.entrada();	
	cout<<r1.a;
	return 0;
}
