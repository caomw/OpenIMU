#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QVBoxLayout>
#include "applicationmenubar.h"
#include "mainwindow.h"
#include "mytreewidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *window = new MainWindow();
    window->show();

    return a.exec();
}



