
#include "Templates.h"

Ship::Ship(const std::string str1){
    ship_comp[0] = str1;
    size =1;
}

Ship::Ship(const std::string str1, const std::string str2){
    ship_comp[0] = str1;
    ship_comp[1] = str2;
    size = 2;
}

Ship::Ship(const std::string str1, const std::string str2, const std::string str3){
    ship_comp[0] = str1;
    ship_comp[1] = str2;
    ship_comp[2] = str3;
    size = 3;
}

Ship::Ship(const std::string str1, const std::string str2, const std::string str3, const std::string str4){
    ship_comp[0] = str1;
    ship_comp[1] =str2;
    ship_comp[2] = str3;
    ship_comp[3] = str4;
    size = 4;
}

size_t Ship::get_size()
{
    return size;
}
