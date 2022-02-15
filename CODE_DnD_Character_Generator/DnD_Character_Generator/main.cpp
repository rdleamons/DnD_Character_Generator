#include <iostream>
#include <string>
#include "Character.h"
#include "datatypes.h"

int main()
{
    Character fred("Fred",WIZARD,HUMAN,LG,1,2,3,4,5,6,7,8);
    std::cout<<"Name:\t\t"<<fred.getName()<<'\n'
        <<"Class:\t\t"<<fred.getStrClass()<<'\n'
        <<"Race:\t\t"<<fred.getStrRace()<<'\n'
        <<"Alignment:\t"<<fred.getStrAlign()<<'\n'
        <<"Strength:\t"<<fred.getStr()<<'\n'
        <<"Intelligence:\t"<<fred.getInt()<<'\n'
        <<"Wisdom:\t\t"<<fred.getWis()<<'\n'
        <<"Dexterity:\t"<<fred.getDex()<<'\n'
        <<"Constitution:\t"<<fred.getCon()<<'\n'
        <<"Charisma:\t"<<fred.getCha()<<'\n'
        <<"Armor Class:\t"<<fred.getAC()<<'\n'
        <<"Initiative:\t"<<fred.getInitiative()<<'\n';
    return 0;
}
