#include "grid.h"
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <string>




// want to use grid to return a valid opponent grid, with 10 ships validly placed
Grid::Grid(){}


void Grid::fill_vec(){
   // std::cout << "Yo";
    int num_ship = 0;
    while (num_ship <= 10){
        int row = rand() % 10 + 1;
        int column = rand() % 10 + 1;
        int hor_or_vert = rand() % 2 + 1;

        std::string newShip_comp1 = "row" + Make_Capital(column);
        if(hor_or_vert == 1){ // want to input horizontal ship
            if(num_ship == 1){
                std::string newShip_comp2 = std::to_string(row) + Make_Capital(column + 1);
                std::string newShip_comp3 = std::to_string(row) + Make_Capital(column + 2);
                std::string newShip_comp4 = std::to_string(row) + Make_Capital(column + 3);
               // check to see if those coordinates are not in the vector of string , if not push_back into vector , if yes do another iteration of the while loop without incrementing the num_ship
                if(Check_Coord_valid(newShip_comp1) && Check_Coord_valid(newShip_comp2) && Check_Coord_valid(newShip_comp3) && Check_Coord_valid(newShip_comp4)){
                    Shipgrid.push_back(newShip_comp1);
                    Shipgrid.push_back(newShip_comp2);
                    Shipgrid.push_back(newShip_comp3);
                    Shipgrid.push_back(newShip_comp4);
                    ++num_ship;
                }
                else{
                    continue;
                }
            }
                else if (num_ship == 2 || num_ship == 3){
                    std::string newShip_comp2 = std::to_string(row) + Make_Capital(column + 1);
                    std::string newShip_comp3 = std::to_string(row) + Make_Capital(column + 2);
                    if(Check_Coord_valid(newShip_comp1) && Check_Coord_valid(newShip_comp2) && Check_Coord_valid(newShip_comp3)){
                        Shipgrid.push_back(newShip_comp1);
                        Shipgrid.push_back(newShip_comp2);
                        Shipgrid.push_back(newShip_comp3);
                        ++num_ship;
                    }
                    else{
                        continue;
                    }
            }
            else if( num_ship == 4 || num_ship ==5 || num_ship == 6){
                std::string newShip_comp2 = std::to_string(row) + Make_Capital(column + 1);
                if(Check_Coord_valid(newShip_comp1) && Check_Coord_valid(newShip_comp2) ){
                    Shipgrid.push_back(newShip_comp1);
                    Shipgrid.push_back(newShip_comp2);
                    ++num_ship;
                }
                else{
                    continue;
                }
            }
            else if( num_ship == 7 || num_ship == 8 || num_ship ==9 || num_ship ==10 ){
                if(Check_Coord_valid(newShip_comp1)  ){
                    Shipgrid.push_back(newShip_comp1);
                    ++num_ship;
                }
                else{
                    continue;
                }
            }
        }
        else if(hor_or_vert == 2){  // want to input a vertical ship
            if(num_ship == 1){
                std::string newShip_comp2 = std::to_string(row + 1) + Make_Capital(column);
                std::string newShip_comp3 = std::to_string(row + 2) + Make_Capital(column);
                std::string newShip_comp4 = std::to_string(row + 3) + Make_Capital(column);
                if(Check_Coord_valid(newShip_comp1) && Check_Coord_valid(newShip_comp2) && Check_Coord_valid(newShip_comp3) && Check_Coord_valid(newShip_comp4)){
                    Shipgrid.push_back(newShip_comp1);
                    Shipgrid.push_back(newShip_comp2);
                    Shipgrid.push_back(newShip_comp3);
                    Shipgrid.push_back(newShip_comp4);
                    ++num_ship;
                }
                else{
                    continue;
                }
            }
            else if (num_ship == 2 || num_ship == 3){
                    std::string newShip_comp2 = std::to_string(row + 1)+ Make_Capital(column);
                    std::string newShip_comp3 = std::to_string(row + 2) + Make_Capital(column);
                    if(Check_Coord_valid(newShip_comp1) && Check_Coord_valid(newShip_comp2) && Check_Coord_valid(newShip_comp3)){
                        Shipgrid.push_back(newShip_comp1);
                        Shipgrid.push_back(newShip_comp2);
                        Shipgrid.push_back(newShip_comp3);
                        ++num_ship;
                    }
                    else{
                        continue;
                    }
            }
            else if( num_ship == 4 || num_ship ==5 || num_ship == 6){
                std::string newShip_comp2 = std::to_string(row + 1) + Make_Capital(column + 1);
                if(Check_Coord_valid(newShip_comp1) && Check_Coord_valid(newShip_comp2) ){
                    Shipgrid.push_back(newShip_comp1);
                    Shipgrid.push_back(newShip_comp2);
                    ++num_ship;
                }
                else{
                    continue;
                }
            }
            else if( num_ship == 7 || num_ship == 8 || num_ship ==9 || num_ship == 10 ){
                if(Check_Coord_valid(newShip_comp1)){
                    Shipgrid.push_back(newShip_comp1);
                    ++num_ship;
                }
                else{
                    continue;
                }
            }
        }
    }
}

bool Grid::Check_Coord_valid(const std::string& cord){
    for(size_t i = 0; i < Shipgrid.size() ; ++i ){
        if(cord == Shipgrid[i]){
            return false;
        }
    }
    return true;
}
std::string Grid::Make_Capital(const int& val){
    if(val == 1){
        return "A";
    }
    else if (val == 2){
        return "B";
    }
    else if( val == 3){
        return "C";
    }
    else if( val == 4){
        return "D";
    }
    else if (val ==5){
        return "E";
    }
    else if(val == 6){
        return "F";
    }
    else if (val == 7){
        return "G";
    }
    else if (val == 8){
        return "H";
    }
    else if(val == 9){
        return "I";
    }
    else if (val == 10){
        return "J";
    }
}
