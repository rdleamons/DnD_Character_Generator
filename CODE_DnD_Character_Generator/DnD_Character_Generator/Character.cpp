#include "Character.hpp"

Character::Character()
{
    charName = "";
    charClass = FIGHTER;
    charRace = HUMAN;
    charAlign = TN;
    charStr=0;
    charInt=0;
    charWis=0;
    charDex = 0;
    charCon = 0;
    charCha = 0;
    charAC = 0;
    charInitiative = 0;
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

std::string Character::getName() { return charName; }
std::string Character::getStrClass(){return strClass(charClass);}
std::string Character::getStrRace(){return strRace(charRace);}
std::string Character::getStrAlign(){return strAlign(charAlign);}

//setters
void Character::setName(std::string inName){charName = inName;}
void Character::setClass(classtype inClass){charClass = inClass;}
void Character::setRace(racetype inRace){charRace = inRace;}
void Character::setAlign(align inAlign){charAlign = inAlign;}
void Character::setStr(int inStr){charStr = inStr;}
void Character::setInt(int inInt){charInt = inInt;}
void Character::setWis(int inWis){charWis = inWis;}
void Character::setDex(int inDex){charDex = inDex;}
void Character::setCon(int inCon){charCon = inCon;}
void Character::setCha(int inCha){charCha = inCha;}
void Character::setAC(int inAC){charAC = inAC;}
void Character::setInitiative(int inInitiative){charInitiative = inInitiative;}

Character::~Character()
{
    //dtor
}
