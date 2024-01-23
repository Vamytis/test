/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>
//#include "Peasant.hpp"
#ifndef HEALTHPOTION_HPP
    #define HEALTHPOTION_HPP


class HealthPotion: virtual public  Knight, virtual public Priest{
        public:
            HealthPotion(const std::string &name, int power);
            ~HealthPotion();
};

#endif