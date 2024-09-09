#include <iostream>
using namespace std;

int main()
{

    string nomes[6] = {"Tereza", "Jonas", "Beatriz", "Jamal", "Alice", "Renzo"};
    /*Indicando o tipo e nome do vetor,depois o seu tamanho é os valores no caso textos
    que cada número ira receber.*/

    for (int i = 0; i < 6; i++)   // Laço de repetição que vai de 0 até 5 (total de 6 iterações)
    {                             // Exibe o nome na tela correspondente ao índice 'i' do vetor 'nomes'
        cout << nomes[i] << endl; // Saída com os nomes do vetor
    }
    return 0;
}