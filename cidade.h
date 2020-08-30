#ifndef CIDADE_H_INCLUDED
#define CIDADE_H_INCLUDED

#include <iostream>

using namespace std;

#include <locale.h>
#include <string.h>
#include <math.h>

typedef struct cidade{
    float x;
    float y;
    char nome[50];
    struct cidade* prox;
}Cidade;

Cidade* inicializa(void);

Cidade *cria();

Cidade *insere(float x, float y, char *nome, Cidade* l);

float distancia(Cidade* c1,Cidade* c2);

void imprime(Cidade *l);

void libera(Cidade *l);

#endif // CIDADE_H_INCLUDED
