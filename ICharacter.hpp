/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>

#ifndef ICHARACTER_HPP
    #define ICHARACTER_HPP


class ICharacter {
        public:
            ICharacter(){};
            virtual ~ICharacter(){};
            virtual const std::string &getName() const = 0;
            virtual int getPower() const = 0;
            virtual int getHp() const = 0;
            virtual int attack () = 0;
            virtual int special () = 0;
            virtual void rest () = 0;
            virtual void damage(int damage) = 0;
};

#endif