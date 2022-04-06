#include "juegomemoria.h"
#include "ui_juegomemoria.h"

JuegoMemoria::JuegoMemoria(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JuegoMemoria)
{
    ui->setupUi(this);


}

JuegoMemoria::~JuegoMemoria()
{
    delete ui;
}

