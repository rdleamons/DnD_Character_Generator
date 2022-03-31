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

    charStrMod = 0;
    charIntMod = 0;
    charWisMod = 0;
    charDexMod = 0;
    charConMod = 0;
    charChaMod = 0;

    charHP = 0;
    charAC = 0;
    charSpeed = 0;
    charInitiative = 0;
}


Character::Character(std::string newName,classtype newClass,racetype newRace,align newAlign,
                     int newStr,int newInt,int newWis,int newDex,int newCon,int newCha, 
                     int newStrMod, int newIntMod, int newWisMod, int newDexMod, int newConMod, int newChaMod,
                     int newHP, int newAC, int newSpeed, int newInitiative)
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

    charStrMod = newStrMod;
    charIntMod = newIntMod;
    charWisMod = newWisMod;
    charDexMod = newDexMod;
    charConMod = newConMod;
    charChaMod = newChaMod;

    charAC = newAC;
    charHP = newHP;
    charSpeed = newSpeed;
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

int Character::getStrMod() { return charStrMod; }
int Character::getIntMod() { return charIntMod; }
int Character::getWisMod() { return charWisMod; }
int Character::getDexMod() { return charDexMod; }
int Character::getConMod() { return charConMod; }
int Character::getChaMod() { return charChaMod; }

int Character::getHP(){return charHP;}
int Character::getAC(){return charAC;}
int Character::getSpeed() { return charSpeed; }
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

void Character::setStrMod(int inStrMod) { charStrMod = inStrMod; }
void Character::setIntMod(int inIntMod) { charIntMod = inIntMod; }
void Character::setWisMod(int inWisMod) { charWisMod = inWisMod; }
void Character::setDexMod(int inDexMod) { charDexMod = inDexMod; }
void Character::setConMod(int inConMod) { charConMod = inConMod; }
void Character::setChaMod(int inChaMod) { charChaMod = inChaMod; }

void Character::setHP(int inHP){charHP = inHP;}
void Character::setAC(int inAC){charAC = inAC;}
void Character::setSpeed(int inSpeed){charSpeed = inSpeed;}
void Character::setInitiative(int inInitiative){charInitiative = inInitiative;}

Character::~Character()
{
    //dtor
}
