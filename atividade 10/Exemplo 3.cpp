#include <iostream>
using namespace std;

int main()
{

    /* Indicando o tipo de um vetor chamado 'notas' que armazena 5 valores do
     tipo double (números com ponto flutuante)*/
    double notas[] = {20.5, 23.6, 28.7, 30.9, 20.0};

    // Laço de repetição que vai de 0 até 4 (total de 5 iterações)
    for (int i = 0; i < 5; i++)
    {                             // Exibe na tela a nota correspondente ao índice 'i' do vetor 'notas'
        cout << notas[i] << endl; // Saída com as notas do vetor
    }
    return 0;
}