/*
    Nome: Leonardo Henrique Cardoso RA19132 2°INF-D
    Professor: José Alberto Matioli
    Matéria: Estrutura de Dados
    Projeto: Solução Cálculo de Rotas(com lista encadeada)
*/

#include "cidade.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Cidade *l;
    l=inicializa();
    l=insere(2,2,"Cidade Um",l);
    l=insere(10,4,"Cidade Dois",l);
    l=insere(19,8,"Cidade Três",l);
    l=insere(16,15,"Cidade Quatro",l);
    l=insere(5,19,"Cidade Cinco",l);
    l=insere(8,10,"Cidade Seis",l);

    imprime(l);

    libera(l);

    return 0;
}
