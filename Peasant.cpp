/*
** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 08
*/

#include "Peasant.hpp"


Peasant ::Peasant(const std::string &name, int power)
{
    _power = power;
    _name = name;
    std::cout << _name << " goes for an adventure." << std::endl;
}

Peasant :: ~Peasant()
{
    std::cout << _name << " is back to his crops." << std::endl;
}

const  std::string &Peasant::getName() const
{
    return _name;
}

int Peasant ::getPower() const
{
    return _power;
}

int Peasant::getHp() const
{
    return _Hp;
}

int Peasant :: attack()
{
    if (getHp() <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    if (_power >= 10) {
        _power -= 10;
        std::cout << _name << " tosses a stone." << std::endl;
         return (5);
    } else {
        std::cout << _name << " is out of power." << std::endl;
        return 0;
    }
}

int Peasant :: special()
{
    if (getHp() <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << _name << " doesn't know any special move." << std::endl;
    return (0);
}

void Peasant :: rest()
{
    if (_Hp <= 0) {
        std::cout << _name << " is out of combat." << std::endl;
        return;
    }
    if (_power + 30 > 100) {
         std::cout << _name << " takes a nap." << std::endl;
        _power = 100;
    } else {
        std::cout << _name << " takes a nap." << std::endl;
        _power += 30;
    }
}

void Peasant ::damage(int damage)
{
    if (_Hp <= 0 || _Hp - damage <= 0) {
        _Hp = 0;
        std::cout << _name << " is out of combat." << std::endl;
    } else {
        std::cout << _name << " takes " << damage << " damage." << std::endl;
         _Hp -= damage;

    }
}
