/*
** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 08
*/

#include "Enchanter.hpp"

Enchanter :: Enchanter(const std::string &name, int power) : Peasant (name, power)
{
    std::cout << getName() << " learns magic from his spellbook." << std::endl;
}

Enchanter :: ~Enchanter()
{
    std::cout <<  getName() << " closes his spellbook." << std::endl;
}

int Enchanter :: attack ()
{

     if (getHp() <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return 0;
    }
     if (this->_power >= 0) {
        this->_power -= 0;
        std::cout << getName() << " doesn't know how to fight." << std::endl;
         return 0;
     } else {
        std::cout << getName() << " is out of power." << std::endl;
        return 0;
    }
}

int Enchanter :: special ()
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

void Enchanter :: rest ()
{
    if (this->_Hp <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return;
    }
    if (this->_Hp > 0 && this->_power >= 0 && this->_power == 0) {
        std::cout << getName() << " meditates." << std::endl;
        this->_power += 100;
    } else {
        std::cout << getName() << " meditates." << std::endl;
        this->_power = 100;
    }
}
