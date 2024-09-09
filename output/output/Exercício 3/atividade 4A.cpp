#include <iostream>
using namespace std;

int main() {
    
 double arquivo, transmissao, segundos;

    // Solicitação dos dados ao usuário
     cout << "Por favor, insira o tamanho do arquivo: ";
    cin >> arquivo;

    cout << "Agora, insira a taxa de transmissao e: ";
    cin >> transmissao;

    // Cálculo do tempo necessário em segundos
    segundos = (arquivo * 8) / transmissao;

    // Exibição do resultado para o usuário

    cout << "O tempo necessario e: " << segundos << " segundos." << std::endl;

    return 0;
}

