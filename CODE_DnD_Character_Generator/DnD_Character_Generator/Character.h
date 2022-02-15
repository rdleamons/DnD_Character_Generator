#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "datatypes.h"

class Character
{
    public:
        Character();
        Character(std::string,classtype,racetype,align,int,int,int,int,int,int,int,int);

        std::string getName();
        classtype getClass();
        racetype getRace();
        align getAlign();
        int getStr();
        int getInt();
        int getWis();
        int getDex();
        int getCon();
        int getCha();
        int getAC();
        int getInitiative();

        std::string getStrClass();
        std::string getStrRace();
        std::string getStrAlign();
        virtual ~Character();
    protected:

    private:
        std::string charName;
        classtype charClass;
        racetype charRace;
        align charAlign;
        int charStr;
        int charInt;
        int charWis;
        int charDex;
        int charCon;
        int charCha;
        int charAC;
        int charInitiative;
};

#endif // CHARACTER_H
