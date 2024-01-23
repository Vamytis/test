/*
** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 08
*/

#include "Knight.hpp"
#include "Peasant.hpp"


Knight :: Knight(const std::string &name, int power) : Peasant (name, power)
{
    std::cout << getName() << " vows to protect the kingdom." << std::endl;
}

Knight :: ~Knight()
{
    std::cout <<  getName() << " takes off his armor." << std::endl;
}

int Knight :: attack ()
{

     if (getHp() <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return 0;
    }
     if (this->_power >= 10) {
        this->_power -= 10;
        std::cout << getName() << " strikes with his sword." << std::endl;
         return (20);
     } else {
        std::cout << getName() << " is out of power." << std::endl;
        return 0;
    }
}

int Knight :: special ()
{

    if (this->_Hp <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return 0;
    }
    if (this->_power >= 30) {
        this->_power-= 30;
        std::cout << getName() << " impales his enemy." << std::endl;
        return 50;
    } else {
        std::cout << getName() << " is out of power." << std::endl;
        return (0);
    }

}

void Knight :: rest ()
{
    if (this->_Hp <= 0) {
        std::cout << getName() << " is out of combat." << std::endl;
        return;
    }

    if (this->_Hp > 0 && this->_power >= 0 && this->_power + 50 <= 100) {
            std::cout << getName() << " eats." << std::endl;
            this->_power += 50;
    } else {
        std::cout << getName() << " eats." << std::endl;
         _power = 100;
    }
}
