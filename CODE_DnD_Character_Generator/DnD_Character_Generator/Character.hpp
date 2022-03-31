#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "datatypes.hpp"

class Character
{
    public:
        Character();
        Character(std::string,classtype,racetype,align,int, int,int,int,int,int,int,int,int,int, int, int, int, int, int, int);

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
        int getHP();
        int getAC();

        int getStrMod();
        int getIntMod();
        int getWisMod();
        int getDexMod();
        int getConMod();
        int getChaMod();

        int getSpeed();
        int getInitiative();

        std::string getStrClass();
        std::string getStrRace();
        std::string getStrAlign();

        void setName(std::string);
        void setClass(classtype);
        void setRace(racetype);
        void setAlign(align);
        void setStr(int);
        void setInt(int);
        void setWis(int);
        void setDex(int);
        void setCon(int);
        void setCha(int);

        void setStrMod(int);
        void setIntMod(int);
        void setWisMod(int);
        void setDexMod(int);
        void setConMod(int);
        void setChaMod(int);

        void setHP(int);
        void setAC(int);
        void setSpeed(int);
        void setInitiative(int);

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

        int charStrMod;
        int charIntMod;
        int charWisMod;
        int charDexMod;
        int charConMod;
        int charChaMod;

        int charHP;
        int charAC;
        int charSpeed;
        int charInitiative;
};

#endif // CHARACTER_H
