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
#include "Paladin.hpp"
#include "ICharacter.hpp"

Paladin :: Paladin(const std::string &name, int power) : Peasant(name, power), Knight(name, power), Enchanter (name, power), Priest (name, power)
{
    std::cout << getName() << " fights for the light." << std::endl;
}

Paladin :: ~Paladin()
{
    std::cout <<  getName() << " is blessed." << std::endl;
}

int Paladin :: attack ()
{
    return Knight::attack();
}

int Paladin :: special ()
{
    return Enchanter::special();
}

void Paladin :: rest ()
{
    return Priest::rest();
}
