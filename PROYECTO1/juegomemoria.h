#ifndef JUEGOMEMORIA_H
#define JUEGOMEMORIA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JuegoMemoria; }
QT_END_NAMESPACE

class JuegoMemoria : public QMainWindow
{
    Q_OBJECT

public:
    JuegoMemoria(QWidget *parent = nullptr);
    ~JuegoMemoria();


private:
    Ui::JuegoMemoria *ui;// Es el que controla toda la interfaz gráfica
};
#endif // JUEGOMEMORIA_H
