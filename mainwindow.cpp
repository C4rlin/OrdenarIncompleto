#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonCriar_clicked()
{
    try {
        QString teste = ui->lineEditQuantidadeElementos->text();
        int tamanhoVetor;
        tamanhoVetor = teste.toInt();
        ce::SistemadeOrdenacao a(tamanhoVetor);
        ui->textEditVetorOriginal->setText(a.obterDadosDoVetor());
        ui->lineEditQuantidadeElementos->clear();
    } catch (QString &erro){
        QMessageBox::information(this,"Deu erro", erro);
    }
}

