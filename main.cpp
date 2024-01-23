#include "Peasant.hpp"
#include "Knight.hpp"
#include "Priest.hpp"
#include "Paladin.hpp"

#include "ICharacter.hpp"

int main ( void )
{
    Enchanter paladin("Baraban" , 67);
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.attack();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.special();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.special();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.rest();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.special();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.rest();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.damage(87);
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.rest();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.attack();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.special();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.damage(100000000);
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.rest();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.attack();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());
    paladin.special();
    printf("Paladin Barbaran %i HP, %i PP\n", paladin.getHp(), paladin.getPower());

}