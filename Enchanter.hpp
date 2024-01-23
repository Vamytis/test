/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>
#include "Peasant.hpp"
#ifndef ENCHANTER_HPP
    #define ENCHANTER_HPP


class Enchanter : virtual public Peasant {
        public:
            Enchanter(const std::string &name, int power);
            ~Enchanter();
            int attack ();
            void rest();
            int special();

};

#endif