#ifndef GRID_H
#define GRID_H

#include <QGraphicsRectItem>
#include <QObject>

class Grid:public QObject , public QGraphicsRectItem{
    Q_OBJECT
public:
    Grid();


};

#endif // GRID_H
