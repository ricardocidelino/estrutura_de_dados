#include <iostream>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Calendario{
	
    public:        
    int dia;
	int mes;
	int ano;
     
	Calendario(int day, int month, int year){
		dia=day;mes=month;ano=year;
	}
		bool bissexto(int ano){
			if( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) ){
        		return true;
			}else{
				return false;   
			}   	
		}

		int WeekDay(int dia, int mes, int ano){
			int f = ano + dia + 3 * (mes - 1) - 1;
			if (mes < 3){
				ano--;
			} 
  			else{
				f -= int(0.4 * mes + 2.3);
				f += int (ano / 4) - int ((ano / 100 + 1) * 0.75)/;
			} 
   			f %= 7;
		}

		int SizeMes(int dia, int mes, int ano){
			cout<<"DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";
			short SizeMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  			if (bissexto) == true){  				
				  SizeMes[1] = 29;				
			}   
  			for(int j = 1; j < DiaDaSemana(1); j++) cout <<'\t';  
  			for(int dia = 1; dia <= SizeMes[mes - 1]; dia++){  				
    			if(dia < 10) cout << '0' <<dia <<'\t'
			}
   			return f+1;

		}
		 
};

 


int main(int argc, char** argv) {
	int dia, mes, ano;	

	cout<<"Data: \n";
	Calendario *clr = new Calendario(11,05,2021);
    clr.bissexto();
    
    cout<<clr.bisexto()<<"\n";

	
	
	return 0;
};
