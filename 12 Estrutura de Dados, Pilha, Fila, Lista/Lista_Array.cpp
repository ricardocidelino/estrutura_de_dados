#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             ListaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             
             void DadoIn(int n)
             {
                  if(ProximaPosicaoLivre <= MAX) VET[ProximaPosicaoLivre++] = n;
             }
             void show()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int inicioOff()//tira do início
             {
                  if(ProximaPosicaoLivre > 0) 
			return VET[--ProximaPosicaoLivre];
             }
             int fimOff()//tira do fim
             {
                  if(ProximaPosicaoLivre > 0)
                  {
                      int ValorDeRetorno = VET[0];
                      for(int i = 1; i < ProximaPosicaoLivre; i++)
                      {
                              VET[i-1] = VET[i];
                      }
                      ProximaPosicaoLivre--;
                      return ValorDeRetorno;
                  }
             }
};

int main(int argc, char *argv[])
{
	str retirada
    ListaDeArray pilha(50);
    lista.dadoIn(3);
    lista.dadoIn(5);
    lista.dadoIn(7);
    lista.dadoIn(1);
    lista.show();
    
    cout<<"\nRetirada primeiro item "
    cin>>retirada
    if(retirada = "inicio") {
		cout <<"\nRetirada primeiro item " <<lista.inicioOff() <<".\n\n";
	}else{
		cout <<"\nRetirada último item " <<lista.fimOff() <<".\n\n";
	}    
        
    lista.fimOff();
    system("PAUSE");
    return EXIT_SUCCESS;
}
