#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define InicioArranjo 1
#define MaxTam 5

typedef int Apontador;

typedef struct
{
  int cod;
  int idade;
} TipoItem;

typedef struct
{
  TipoItem Item[MaxTam];
  Apontador Primeiro;
  Apontador Ultimo;
} TipoLista;

TipoLista Lista;
TipoItem x;
Apontador pos;

void FLVazia(TipoLista *Lista)
{
  Lista->Primeiro = InicioArranjo;
  Lista->Ultimo = Lista->Primeiro;
}
int Vazia(TipoLista Lista)
{
  return (Lista.Primeiro==Lista.Ultimo);
}
void Insere(TipoItem x,TipoLista *Lista)
{
   if (Lista->Ultimo > MaxTam){
     printf("\n A lista esta cheia \n");
   }
   else{
    Lista->Item[Lista->Ultimo -1]=x;
    Lista->Ultimo=Lista->Ultimo+1;
   }
}
void Imprime (TipoLista Lista){

 int aux;
 for (aux=Lista.Primeiro;aux <Lista.Ultimo;aux++)
 {
   printf("Posição: %d | Código: %d | Idade: %d\n",aux,Lista.Item[aux - InicioArranjo].cod,Lista.Item[aux - InicioArranjo].idade);
 }
}
void Retira(Apontador pos,TipoLista *Lista,TipoItem *x){
   
   int aux;
   if (Vazia (*Lista) || pos >= Lista->Ultimo)
   {
    printf("ERRO: Posição não existe\n");
   }else{
     *x = Lista->Item[pos-1];
     printf("O elemento retirado foi o de codigo %d\n",x->cod);
     Lista->Ultimo=Lista->Ultimo-1;
     for (aux = pos; aux < Lista->Ultimo; aux++)
     {
       Lista->Item[aux-1] = Lista->Item[aux]; 
     }
   }
   
}
void RetiraPos(Apontador pos,TipoLista *Lista,TipoItem *x){
   
   int aux;
   if (Vazia (*Lista) || pos >= Lista->Ultimo-1)
   {
    printf("ERRO: Posição não existe\n");
   }else{
     *x = Lista->Item[pos];
     printf("O elemento retirado foi o de codigo %d\n",x->cod);
     Lista->Ultimo=Lista->Ultimo-1;
     for (aux = pos; aux < Lista->Ultimo-1; aux++)
     {
       Lista->Item[aux] = Lista->Item[aux+1]; 
     }
   } 
}/*void Procura(TipoItem x,TipoLista *Lista){
   
}*/
int main()
{
  SetConsoleOutputCP(CP_UTF8);
  int opcao, resposta;
  FLVazia(&Lista);
  do
  {
    printf("\n\nMenu\n\n");
    printf("Digite a opção desejada:\n");
    printf("0 - Sair\n");
    printf("1 - Esvazair lista\n");
    printf("2 - Verificar se a lista esta vazia\n");
    printf("3 - Inserir elementos na lista\n");
    printf("4 - Imprimir os elementos da Lista\n");
    printf("5 - Retira elementos da lista antes da posiçaõ determinada\n");
    printf("6 - Retira elementos da Lista\n");
    printf("7 - Pesquisar  elementos na Lista\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 0:
    {
      printf("PROGRAMA ENCERRADO!\n");
      break;
    }
    case 1:
    {
      FLVazia(&Lista);
      printf("\nA LISTA VAZIA\n");
      break;
    }
    case 2:
    {
      resposta = Vazia(Lista);
      if (resposta == 1)
      {
        printf("\n Lista esta vazia\n");
      }
      else
      {
        printf("\n Lista não esta vazia\n");
        break;
      }
    }case 3:
    {
      printf("Digite o codigo\n");
      scanf("%d",&x.cod);
      printf("Digite a idade\n");
      scanf("%d",&x.idade);
      Insere(x,&Lista);
      break;
    }case 4:{
      Imprime(Lista);
      break;
    }case 5:{
       printf("Digite a posição\n");
       scanf("%d",&pos);
       Retira(pos,&Lista,&x);
       break;
    }case 6:{
      printf("Digite a posição \n");
      scanf("%d",&pos);
      RetiraPos(pos,&Lista,&x);
      break;
    }/*case 7:{
      printf("Digite o código\n");
      scanf("%d",&x.cod);
      Procura(x,&Lista);
      break;
    }*/
    default:
      printf("\n\nOpção invalida\n\n");
      break;
    }
    getch();
    system("cls");
  } while (opcao != 0);
  return (0);
}
