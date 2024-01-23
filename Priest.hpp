/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>
#include "Peasant.hpp"
#include "Enchanter.hpp"
#ifndef PRIEST_HPP
    #define PRIEST_HPP


class Priest : virtual public Enchanter{
        public:
            Priest(const std::string &name, int power);
            ~Priest();
            int attack ();
            void rest();
            int special();

};

#endif