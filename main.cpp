#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QImage>
#include <QGraphicsView>
#include <QGraphicsScene>


#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main(int argc, char *argv[])
{
    srand (time(NULL));
    QApplication a(argc, argv);

    MainWindow w;
    w.fill_vec();
    w.show();

    return a.exec();
}
