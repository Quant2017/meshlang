#include "window.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    meshlang::window W;
    W.import("1.mla");
    do{
        W.draw();
    }while(W.pollEvent());

    return 0;
}
