#include <iostream>
using namespace std;

int main(){

 double nota1,nota2,nota3,nota4;

cout << "Digite a nota do primeiro bimestre: ";
cin >> nota1;

cout << "Digite a nota do segundo bimestre:  ";
cin >> nota2;

cout << "Digite a nota do terceiro bimestre: ";
cin >> nota3;

cout << "Digite a nota do quarto bimestre: ";
cin >> nota4;

 double total = nota1 + nota2 + nota3 + nota4;

if( total >= 60){
    cout << "Parabens aprovado:\n" << "Sua nota final " << total << endl;
}
else if
  (6< total){
    cout << "Reprovado:\n" << "Sua nota final " << total << endl;
  }
  
return 0;
}
