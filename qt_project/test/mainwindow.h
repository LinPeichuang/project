#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ecosystem.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
void Open_Sub();
void close_All();

private:
    Ui::MainWindow *ui;
    ecosystem sub;


};
//

#endif // MAINWINDOW_H
