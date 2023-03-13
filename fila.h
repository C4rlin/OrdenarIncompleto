#ifndef FILA_H
#define FILA_H
#include<QString>

namespace ce{

class Fila
{
private:
    int tamanho;
    int *array;
    int inicio;
    int fim;
    int quantidadeElementos;
public:
    Fila(int tamanho);
    ~Fila();
    bool estaVazia()const;
    bool estaCheia()const;
    void inserir(int elemento);
    int retirar();
    int acessar()const;
};
}
#endif // FILA_H
