#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowIcon(QIcon("pieIndiaLogo.ico"));
    w.setWindowTitle("Fatigue Testing");
    w.show();

    return a.exec();
}
