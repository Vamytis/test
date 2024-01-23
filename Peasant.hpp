/** EPITECH PROJECT, 2024
** Paradigms Seminar
** File description:
** Day 09
*/

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#ifndef PEASANT_HPP
    #define PEASANT_HPP


class Peasant : public ICharacter{
        protected:
            std::string _name;
            int _power;
            int _Hp = 100;
        public:
            Peasant(const std::string &name, int power);
            ~Peasant();
            const std::string &getName() const override;
            int getPower() const override;
            int getHp() const override;
            int attack () override;
            int special () override;
            void rest () override;
            void damage(int damage) override;
};

#endif