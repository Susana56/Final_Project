#ifndef SHIPS_H
#define SHIPS_H
#include <vector>
#include <string>


class Ship{
private:
    size_t size;

public:
    std::vector<std::string> ship_comp;
    Ship(const std::string str1);
    Ship(const std::string str1, const std::string str2);
    Ship(const std::string str1, const std::string str2, const std::string str3);
    Ship(const std::string str1, const std::string str2, const std::string str3, const std::string str4);
    size_t get_size();

    /*
    void strike();
    bool all_ship_sunken();
    */
};
#endif // SHIPS_H
