/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>
#include "Peasant.hpp"
#ifndef KNIGHT_HPP
    #define KNIGHT_HPP


class Knight : virtual public Peasant {
        public:
            Knight(const std::string &name, int power);
            ~Knight();
            int attack ();
            void rest();
            int special();

};

#endif