#ifndef ECOSYSTEM_H
#define ECOSYSTEM_H

#include <QMainWindow>
#include<myscene.h>
#include<QCloseEvent>
namespace Ui {
class ecosystem;
}

class ecosystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit ecosystem(QWidget *parent = nullptr);
    ~ecosystem();
    void closeEvent(QCloseEvent *event);
    void scence1();
    void setNum();
signals:
     void L_colse();
private slots:
    void addScore();
    void Send_L_colse();
private:
    Ui::ecosystem *ui;
    myScene *sc;
    int time_1;
    int size1;

};

#endif // ECOSYSTEM_H
