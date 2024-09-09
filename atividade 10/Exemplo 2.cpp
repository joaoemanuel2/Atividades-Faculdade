#include <iostream>
using namespace std;

int main()
{

    // Declaração de um vetor int chamado 'idades'e seu tamanho que pode armazenar 9 inteiros
    int idades[9] = {14, 16, 14, 12, 8, 20, 17, 16, 14};

    // Laço de repetição que vai de 0 até 8 (total de 9 iterações)
    for (int i = 0; i < 9; i++)
    {                              // Exibe a idade na tela correspondente ao índice 'i' do vetor 'idades'
        cout << idades[i] << endl; // Saída com as idades do vetor
    }
    return 0;
}