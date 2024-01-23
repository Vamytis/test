/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>
#include "Peasant.hpp"
#include "Knight.hpp"
#include "Priest.hpp"
#ifndef PALADIN_HPP
    #define PALADIN_HPP


class Paladin : virtual public Knight, virtual public Priest {
        public:
            Paladin(const std::string &name, int power);
            ~Paladin();
            int attack ();
            void rest();
            int special();

};

#endif