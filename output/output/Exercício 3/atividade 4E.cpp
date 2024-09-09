#include <iostream>
using namespace std;

int main(){

// Definido a variaveis
    
    float positivos1,positivos2,positivos3,positivos4,positivos5  = 0.0;
    float negativos1,negativos2,negativos3,negativos4,negativos5 = 0.0;
    
    // Solicitando os gol positivos
    cout << "Numeros de gol feitos no jogo:\n";
   
    cout << "Gol a favor jogo 1:";
    cin  >> positivos1 ;

    cout << "Gol a fovor jogo 2:";
    cin  >> positivos2;

    cout << "Gol a favor jogo 3:";
    cin >> positivos3;

    cout << "Gol a favor jogo 4:";
    cin >> positivos4;

    cout << "Gol a favor jogo 5:";
    cin >> positivos5;

//Soma dos gols positivos
    float soma_positivo = positivos1 + positivos2 + positivos3 + positivos4 + positivos5;
 cout << "Gols feitos:" << soma_positivo << endl;

//Solicitando os gols levados
    cout << "Numero de gol levados:\n";

    cout << "Gol levados jogo 1:";
    cin >> negativos1;

    cout << "Gol levados jogo 2:";
    cin >> negativos2;

    cout << "Gol levados jogo 3:";
    cin  >> negativos3;

    cout << "Gol levados jogo 4:";
    cin >> negativos4;

    cout << "Gol levados jogo 5:";
    cin >> negativos5;

//Somas dos gols negativos 
    float soma_negativos = negativos1 + negativos2 + negativos3 + negativos4 + negativos5;
 cout << "Gols levados:" << soma_negativos << endl;
//Somas dos total de gols
    float total = soma_positivo - soma_negativos;

//Saida do resultado
    cout << "Resultado total dos gols:" << total << endl;
    

return 0;
}