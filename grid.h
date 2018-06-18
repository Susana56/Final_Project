#ifndef GRID_H
#define GRID_H

#include <QGraphicsRectItem>
#include <QObject>
#include <string>

class Grid:public QObject , public QGraphicsRectItem{
    Q_OBJECT
public:
    Grid();
    std::vector<std::string> Shipgrid;
    std::string Make_Capital(const int& val);
    bool Check_Coord_valid(const std::string& cord);
    void fill_vec();

};

#endif // GRID_H
