#ifndef RLINEAL_H
#define RLINEAL_H

#include <QMainWindow>

namespace Ui {
class rlineal;
}

class rlineal : public QMainWindow
{
    Q_OBJECT

public:
    explicit rlineal(QWidget *parent = 0);
    ~rlineal();
private slots:
    void calcular();//se declara el metodo calcular
                    //declare the method to calculate
    void clear();//se declara el metodo borrar
                 //declare the method to delete
private:
    Ui::rlineal *ui;
};

#endif // RLINEAL_H
