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
#include "HealthPotion.hpp"

HealthPotion :: HealthPotion(const std::string &name, int power)
{
    std::cout << getName() << " feels rejuvenated." << std::endl;
}

HealthPotion :: ~HealthPotion()
{
}
