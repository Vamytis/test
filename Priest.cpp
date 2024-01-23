/*
** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 08
*/

#include "Knight.hpp"
#include "Peasant.hpp"
#include "Enchanter.hpp"
#include "Priest.hpp"

Priest :: Priest(const std::string &name, int power) : Peasant(name, power), Enchanter (name, power)
{
    std::cout << getName() << " enters in the order." << std::endl;
}

Priest :: ~Priest()
{
    std::cout <<  getName() << " finds peace." << std::endl;
}

int Priest :: attack ()
{

     if (getHp() <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return 0;
    }
     if (this->_power >= 0) {
        this->_power -= 0;
        std::cout << getName() << " doesn't know how to fight." << std::endl;
         return (0);
     } else {
        std::cout << getName() << " is out of power." << std::endl;
         return (0);
    }
}

int Priest :: special ()
{

    if (this->_Hp <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return 0;
    }
    if (this->_power >= 50) {
        this->_power-= 50;
        std::cout << getName() << " casts a fireball." << std::endl;
         return (99);
    } else {
        std::cout << getName() << " is out of power." << std::endl;
        return 0;
    }
}

void Priest :: rest ()
{
    if (this->_Hp <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return;
    }
    if (this->_Hp + 100 > 100 && this->_power + 100 > 100) {
        std::cout << getName() << " prays." << std::endl;
        this->_power = 100;
        this-> _Hp = 100;
    } else {
         std::cout << getName() << " prays." << std::endl;
        this->_power += 100;
        this-> _Hp += 100;
    }
}
