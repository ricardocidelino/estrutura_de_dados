#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray
{
      private:
             int *VET;
             int ProxPosLivre;
             int MAX;
      public:
             ListaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProxPosLivre = 0;
             }
             void InsereFim(int n)
             {
                  if(ProxPosLivre < MAX) 
				  VET[ProxPosLivre++] = n;
             }
             void InsereInicio(int n){
             	
             	if(ProxPosLivre < MAX){
				 			 
             	 	
             	 	for(int i=ProxPosLivre; i>=0; i--){
             	 		
             	 			VET[i]=VET[i-1];
             	 		
					  }
					  VET[0] = n;
					  ProxPosLivre++;
				  } 
             }
             			 
             void Mostra()
             {
                  for(int i = 0; i<ProxPosLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int RetiraInicio()
             {
                  if(ProxPosLivre > 0)
                  {
                      int ValorRetorno = VET[0];
                      for(int i = 0; i < ProxPosLivre; i++)
                      {
                              VET[i] = VET[i+1];
                      }
                      ProxPosLivre--;
                      return ValorRetorno;
                  }
             }
             int RetiraFim()
             {
                  if(ProxPosLivre > 0) 
				  return VET[--ProxPosLivre];
             }
             int RetiraMeio()
             {
                  if(ProxPosLivre > 0) 
				  return VET[ProxPosLivre--];
             }
};

int main(int argc, char *argv[])
{
    ListaDeArray lista(50);
    lista.InsereInicio(3);
    lista.InsereInicio(5);
    lista.Mostra();
    cout <<"\nRetira da fila o " <<lista.RetiraFim() <<".\n\n";
    lista.Mostra();
    cout<< "\nRetira do meio da fila o " << lista.RetiraMeio()<<".\n\n";
    lista.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
