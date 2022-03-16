#include "datatypes.hpp"

std::string strRace(racetype inRace)
{
    std::string ret;
    switch(inRace)
    {
        case DRAGONBORN:
            ret="Dragonborn";
        break;
        case DWARF:
            ret="Dwarf";
            break;
        case ELF:
            ret="Elf";
            break;
        case GNOME:
            ret="Gnome";
            break;
        case HALFELF:
            ret="Half-elf";
            break;
        case HALFLING:
            ret="Halfling";
            break;
        case HALFORC:
            ret="Half-orc";
            break;
        case HUMAN:
            ret="Human";
            break;
        case TIEFLING:
            ret="Tiefling";
            break;
        default:
            ret="INVALID";
    }
    return ret;
}
std::string strClass(classtype inClass)
{
    std::string ret;
    switch(inClass)
    {
        case BARBARIAN:
            ret="Barbarian";
            break;
        case BARD:
            ret="Bard";
            break;
        case CLERIC:
            ret="Cleric";
            break;
        case DRUID:
            ret="Druid";
            break;
        case FIGHTER:
            ret="Fighter";
            break;
        case MONK:
            ret="Monk";
            break;
        case PALADIN:
            ret="Paladin";
            break;
        case RANGER:
            ret="Ranger";
            break;
        case ROGUE:
            ret="Rogue";
            break;
        case SORCERER:
            ret="Sorcerer";
            break;
        case WARLOCK:
            ret="Warlock";
            break;
        case WIZARD:
            ret="Wizard";
            break;
        default:
            ret="INVALID";
    }
    return ret;
}
std::string strAlign(align inAlign)
{
    std::string ret;
    switch(inAlign)
    {
        case LG:
            ret="Lawful Good";
            break;
        case NG:
            ret="Neutral Good";
            break;
        case CG:
            ret="Chaotic Good";
            break;
        case LN:
            ret="Lawful Neutral";
            break;
        case TN:
            ret="True Neutral";
            break;
        case CN:
            ret="Chaotic Neutral";
            break;
        case LE:
            ret="Lawful Evil";
            break;
        case NE:
            ret="Neutral Evil";
            break;
        case CE:
            ret="Chaotic Evil";
            break;
        default:
            ret="INVALID";
        return ret;
    }
}
