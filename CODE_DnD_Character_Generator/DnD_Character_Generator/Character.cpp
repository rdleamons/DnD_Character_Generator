#include "Character.h"

Character::Character()
{
    //put constructor here
}

Character::Character(std::string newName,classtype newClass,racetype newRace,align newAlign,int newStr,int newInt,int newWis,int newDex,int newCon,int newCha,int newAC,int newInitiative)
{
    charName = newName;
    charClass = newClass;
    charRace = newRace;
    charAlign = newAlign;
    charStr = newStr;
    charInt = newInt;
    charWis = newWis;
    charDex = newDex;
    charCon = newCon;
    charCha = newCha;
    charAC = newAC;
    charInitiative = newInitiative;
}

//getters
std::string Character::getName(){return charName;}
classtype Character::getClass(){return charClass;}
racetype Character::getRace(){return charRace;}
align Character::getAlign(){return charAlign;}
int Character::getStr(){return charStr;}
int Character::getInt(){return charInt;}
int Character::getWis(){return charWis;}
int Character::getDex(){return charDex;}
int Character::getCon(){return charCon;}
int Character::getCha(){return charCha;}
int Character::getAC(){return charAC;}
int Character::getInitiative(){return charInitiative;}

std::string Character::getStrClass(){return strClass(charClass);}
std::string Character::getStrRace(){return strRace(charRace);}
std::string Character::getStrAlign(){return strAlign(charAlign);}

//put setters here when i get around to making them

Character::~Character()
{
    //dtor
}
