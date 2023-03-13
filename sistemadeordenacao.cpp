#include "sistemadeordenacao.h"

namespace ce{

SistemadeOrdenacao::SistemadeOrdenacao(int tamanhoVetor):
    vetor(0),
    tamanhoVetor(tamanhoVetor)
{
    if(tamanhoVetor <= 0) throw "ERRO! Tamanho não pode ser <= 0!";
    try {

        vetor = new int[tamanhoVetor];
        this->tamanhoVetor = tamanhoVetor;

        //gerar valores incluir vetor
        QRandomGenerator* gerador = QRandomGenerator::global();
        for(int i=0; i < tamanhoVetor; i++){
            vetor[i] = gerador->bounded(0,101);
        }
    }
    catch (std::bad_alloc &ërro) {
        throw QString("Impossivel criar o vetor");
    }
}
QString SistemadeOrdenacao::obterDadosDoVetor()const{
    QString saida;
    for(int i=0; i < tamanhoVetor; i++){
        saida += QString::number(vetor[i]) + " | ";
    }
    return saida;
}
QString SistemadeOrdenacao::


}
