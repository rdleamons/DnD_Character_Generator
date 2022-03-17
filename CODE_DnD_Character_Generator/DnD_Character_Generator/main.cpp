#include <iostream>
#include <string>
#include "Character.hpp"
#include "datatypes.hpp"
#include "diceRoller.hpp"
#include "organizeStats.hpp"

int main()
{
    Character user;
    diceRoller dice;
    statsOrganizer statsOrg;
    std::string inName;
    bool valid;
    int input;

    // Set character name
    std::cout<<"Name?\n?>";
    std::getline(std::cin,inName);
    while(inName == ""){
        std::cout<<"?>";
        std::getline(std::cin,inName);
    }
    user.setName(inName);

    // Set character class
    valid=0;
    do{
        std::cout<<"\nChoose your class:\n"
            <<"1) BARBARIAN\n"
            <<"2) BARD\n"
            <<"3) CLERIC\n"
            <<"4) DRUID\n"
            <<"5) FIGHTER\n"
            <<"6) MONK\n"
            <<"7) PALADIN\n"
            <<"8) RANGER\n"
            <<"9) ROGUE\n"
            <<"10) SORCERER\n"
            <<"11) WARLOCK\n"
            <<"12) WIZARD\n"
            <<"?>";
        std::cin>>input;
        if(input >= 1 && input <= 12){
            valid=1;
        }else{
            std::cout<<"Invalid choice! ";
        }
    }while(valid==0);
    user.setClass(classtype(input-1));

    // Set character class
    valid=0;
    do{
        std::cout<<"\nChoose your race:\n"
            <<"1) DRAGONBORN\n"
            <<"2) DWARF\n"
            <<"3) ELF\n"
            <<"4) GNOME\n"
            <<"5) HALFELF\n"
            <<"6) HALFLING\n"
            <<"7) HALFORC\n"
            <<"8) HUMAN\n"
            <<"9) TIEFLING\n"
            <<"?>";
        std::cin>>input;
        if(input >= 1 && input <= 9){
            valid=1;
        }else{
            std::cout<<"Invalid choice! ";
        }
    }while(valid==0);
    user.setRace(racetype(input-1));

    // Set alignment
    valid=0;
    do{
        std::cout<<"\nChoose your alignment:\n"
            <<"1) LAWFUL GOOD    | 2) NEUTRAL GOOD | 3) CHAOTIC GOOD\n"
            <<"4) LAWFUL NEUTRAL | 5) TRUE NEUTRAL | 6) CHAOTIC NEUTRAL\n"
            <<"7) LAWFUL EVIL    | 8) NEUTRAL EVIL | 9) CHAOTIC EVIL\n"
            <<"?>";
        std::cin>>input;
        if(input >= 1 && input <= 9){
            valid=1;
        }else{
            std::cout<<"Invalid choice! ";
        }
    }while(valid==0);
    user.setAlign(align(input-1));

    dice.statsRoll();

	statsOrg.updateStats(user, dice);


    std::cout << "\n" 
        << "Name:\t\t" << user.getName() << '\n'
        << "Class:\t\t" << user.getStrClass() << '\n'
        << "Race:\t\t" << user.getStrRace() << '\n'
        << "Alignment:\t" << user.getStrAlign() << '\n'
        << "Strength:\t" << user.getStr() << '\n'
        << "Intelligence:\t" << user.getInt() << '\n'
        << "Wisdom:\t\t" << user.getWis() << '\n'
        << "Dexterity:\t" << user.getDex() << '\n'
        << "Constitution:\t" << user.getCon() << '\n'
        << "Charisma:\t" << user.getCha() << '\n';

        //<<"Armor Class:\t"<<user.getAC()<<'\n'
        //<<"Initiative:\t"<<user.getInitiative()<<'\n';

    return 0;
}

