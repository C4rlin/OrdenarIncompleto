#include "fila.h"

namespace ce{

Fila::Fila(int tamanho):
    tamanho(0),
    array(0),
    inicio(-1),
    fim(-1),
    quantidadeElementos(0)
{
    if(tamanho <= 0) throw "ERRO! Tamanho não pode ser <= 0!";
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc &ërro){
        throw "A Fila deu pau";
    }
}
Fila::~Fila(){
    if(array) delete[]array;
}
bool Fila::estaCheia()const{
    return (quantidadeElementos==tamanho);
}
bool Fila::estaVazia()const{
    return (quantidadeElementos==0);
}
int Fila::acessar()const{
    if(estaVazia()) throw "A fila não pode estar vazia!";
    return array[inicio];
}
void Fila::inserir(int elemento){
    if(estaCheia()) throw "A fila esta cheia";
    if(estaVazia()) inicio = 0;
    fim++;
    if(fim==tamanho) fim = 0;
    array[fim] = elemento;
    quantidadeElementos++;
}
int Fila::retirar(){
    if(estaVazia()) throw "A fila esta vazia";
    int aux = array[inicio];
    inicio++;
    if(inicio==tamanho) inicio = 0;
    quantidadeElementos--;
    if(estaVazia()) inicio = fim = -1;
    return aux;
}


}
