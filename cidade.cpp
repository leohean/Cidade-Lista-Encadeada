#include "cidade.h"

Cidade* inicializa (void)
{
return NULL;
}

Cidade* cria(){
    Cidade *c=new Cidade;
    return c;
}

Cidade* insere(float x, float y, char *nome, Cidade *l){
    Cidade *c=cria();
    c->x=x;
    c->y=y;
    strcpy(c->nome, nome);

    if(l==NULL){
        c->prox=NULL;
        l=c;
    }
    else{
        Cidade *p=l;
        while(p->prox!=NULL){
            p=p->prox;
        }
        c->prox=NULL;
        p->prox=c;
    }
    return l;
}

float distancia(Cidade* c1,Cidade* c2){
    float dx=abs(c1->x-c2->x);
    float dy=abs(c1->y-c2->y);
    return sqrt(dx*dx + dy*dy);
}

void imprime(Cidade* l){
    Cidade* p;
    Cidade* c1;
    Cidade* c2;
    float d,distanciaTotal;

    cout<<"Origem: \tDestino:"<<endl;

    for(p=l;p!=NULL&&p->prox!=NULL;p=p->prox){
       c1=p;
       c2=p->prox;
       d=distancia(c1,c2);
       distanciaTotal+=d;
       cout<<""<<c2->nome<<"\t"<<c1->nome<<"\t"<<d<<endl;
    }

    c1=l;

    d=distancia(c1,c2);
    distanciaTotal+=d;

    cout<<""<<c2->nome<<"\t"<<c1->nome<<"\t"<<d<<"\n"<<endl;

    cout<<"Distância Total = "<<distanciaTotal<<endl;
}

void libera(Cidade *l){
    Cidade *p;
    for(p=l;p!=NULL&&p->prox!=NULL;p=p->prox){
        free(p);
    }
}



