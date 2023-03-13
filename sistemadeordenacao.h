#ifndef SISTEMADEORDENACAO_H
#define SISTEMADEORDENACAO_H
#include <fila.h>
#include <QRandomGenerator>
#include <QMessageBox>

namespace ce{

class SistemadeOrdenacao
{
private:
    int *vetor;
    int tamanhoVetor;
public:
    SistemadeOrdenacao(int tamanhoVetor);
    QString obterDadosDoVetor()const;
    QString ordenar();
};
}
#endif // SISTEMADEORDENACAO_H
