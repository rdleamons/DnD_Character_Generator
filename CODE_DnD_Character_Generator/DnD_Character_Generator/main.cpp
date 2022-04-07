#include <iostream>
#include <string>
#include <fstream>
#include "Character.hpp"
#include "datatypes.hpp"
#include "diceRoller.hpp"
#include "organizeStats.hpp"

void printCharSheet(Character &user)
{
    std::cout << "\n"
        << "Name:\t\t" << user.getName() << '\n'
        << "Class:\t\t" << user.getStrClass() << '\n'
        << "Race:\t\t" << user.getStrRace() << '\n'
        << "Alignment:\t" << user.getStrAlign() << '\n'
        << "Speed: \t\t" << user.getSpeed() << '\n'
        << "Hit Points: \t" << user.getHP() << '\n' << std::endl

        << "Strength:\t" << user.getStr() << "\tModifer: " << user.getStrMod() << '\n'
        << "Intelligence:\t" << user.getInt() << "\tModifer: " << user.getIntMod() << '\n'
        << "Wisdom:\t\t" << user.getWis() << "\tModifer: " << user.getWisMod() << '\n'
        << "Dexterity:\t" << user.getDex() << "\tModifer: " << user.getDexMod() << '\n'
        << "Constitution:\t" << user.getCon() << "\tModifer: " << user.getConMod() << '\n'
        << "Charisma:\t" << user.getCha() << "\tModifer: " << user.getChaMod() << '\n' << std::endl

        <<"Armor Class:\t"<<user.getAC()<<'\n'
        <<"Initiative:\t"<<user.getInitiative()<<'\n';
}

void printCharSheetToFile(Character& user, std::ofstream &file)
{
    file
        << "Name:\t\t" << user.getName() << '\n'
        << "Class:\t\t" << user.getStrClass() << '\n'
        << "Race:\t\t" << user.getStrRace() << '\n'
        << "Alignment:\t" << user.getStrAlign() << '\n'
        << "Speed: \t\t" << user.getSpeed() << '\n'
        << "Hit Points: \t" << user.getHP() << '\n' << std::endl

        << "Strength:\t" << user.getStr() << "\tModifer: " << user.getStrMod() << '\n'
        << "Intelligence:\t" << user.getInt() << "\tModifer: " << user.getIntMod() << '\n'
        << "Wisdom:\t\t" << user.getWis() << "\tModifer: " << user.getWisMod() << '\n'
        << "Dexterity:\t" << user.getDex() << "\tModifer: " << user.getDexMod() << '\n'
        << "Constitution:\t" << user.getCon() << "\tModifer: " << user.getConMod() << '\n'
        << "Charisma:\t" << user.getCha() << "\tModifer: " << user.getChaMod() << '\n' << std::endl

        << "Armor Class:\t" << user.getAC() << '\n'
        << "Initiative:\t" << user.getInitiative() << '\n';
}

int main()
{
    std::ofstream charSheetFile;
    Character user;
    diceRoller dice;
    statsOrganizer statsOrg;
    std::string inName;
    bool valid;
    int input;
    char rerollInput;
    char fileInput;

    // Set character name
    std::cout<<"What's your character's name?\n";
    do{
        std::cout<<"?>";
        std::getline(std::cin, inName);
    }while(inName == "");
    user.setName(inName);

    // Set character class
    valid=0;
    do{
        std::cout<<"\nWhat's " << user.getName() << "'s class? Enter the corresponding number:\n"
            <<"1) Barbairian\n"
            <<"2) Bard\n"
            <<"3) Cleric\n"
            <<"4) Druid\n"
            <<"5) Fighter\n"
            <<"6) Monk\n"
            <<"7) Paladin\n"
            <<"8) Ranger\n"
            <<"9) Rogue\n"
            <<"10) Sorcerer\n"
            <<"11) Warlock\n"
            <<"12) Wizard\n"
            <<"?>";
        std::cin>>input;
        if(input >= 1 && input <= 12){
            valid=1;
        }else{
            std::cout<<"Invalid choice! ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }while(valid==0);
    user.setClass(classtype(input-1));

    // Set character class
    valid=0;
    do{
        std::cout<<"\nWhat's " << user.getName() << "'s race? Enter the corresponding number:\n"
            <<"1) Dragonborn\n"
            <<"2) Dwarf\n"
            <<"3) Elf\n"
            <<"4) Gnome\n"
            <<"5) Half-Elf\n"
            <<"6) Halfling\n"
            <<"7) Half-Orc\n"
            <<"8) Human\n"
            <<"9) Tiefling\n"
            <<"?>";
        std::cin>>input;
        if(input >= 1 && input <= 9){
            valid=1;
        }else{
            std::cout<<"Invalid choice!";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }while(valid==0);
    user.setRace(racetype(input-1));

    // Set alignment
    valid=0;
    do{
        std::cout<<"\nWhat's " << user.getName() << "'s alignment?\n"
            <<"1) Lawful Good    | 2) Neutral Good | 3) Chaotic Good \n"
            <<"4) Lawful Neutral | 5) True Neutral | 6) Chaotic Neutral \n"
            <<"7) Lawful Evil    | 8) Neutral Evil | 9) Chaotic Evil \n"
            <<"?>";
        std::cin>>input;
        if(input >= 1 && input <= 9){
            valid=1;
        }else{
            std::cout<<"Invalid choice!";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }while(valid==0);
    user.setAlign(align(input-1));

    // Roll stats, organize them, and update based on class/race
    dice.statsRoll();
	statsOrg.updateStats(user, dice);

    // Print character sheet
    printCharSheet(user);

    do
    {
        std::cout << std::endl << "\nReroll stats? y/n\n?>";
        std::cin >> rerollInput;

        if (rerollInput == 'y')
        {
            dice.statsRoll();
            statsOrg.updateStats(user, dice);

            printCharSheet(user);
        }

    } while (rerollInput != 'n');

    if (rerollInput == 'n')
    {
        std::cout << "\nWould you like to save your character sheet? y/n\n";
        std::cin >> fileInput;

        if (fileInput == 'y')
        {
            charSheetFile.open(user.getName() + "_CharacterSheet.txt");
            printCharSheetToFile(user, charSheetFile);
            charSheetFile.close();
            return 0;
        }
        else
            return 0;
            
    }
}

