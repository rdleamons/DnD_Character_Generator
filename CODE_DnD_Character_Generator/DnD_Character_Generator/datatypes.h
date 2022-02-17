#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED
#include <string>

//definitions for some of the various enums used in the program. the .cpp file also has some corresponding functions to translate the value of those enums into a string for printing purposes.

enum classtype {
    BARBARIAN,
    BARD,
    CLERIC,
    DRUID,
    FIGHTER,
    MONK,
    PALADIN,
    RANGER,
    ROGUE,
    SORCERER,
    WARLOCK,
    WIZARD
};

enum racetype {
    DRAGONBORN,
    DWARF,
    ELF,
    GNOME,
    HALFELF,
    HALFLING,
    HALFORC,
    HUMAN,
    TIEFLING
};

enum align {
    LG,NG,CG,
    LN,TN,CN,
    LE,NE,CE
};

std::string strRace(racetype);
std::string strClass(classtype);
std::string strAlign(align);

#endif // DATATYPES_H_INCLUDED
