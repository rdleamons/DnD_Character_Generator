#include "organizeStats.hpp"
#include <iostream>

statsOrganizer::statsOrganizer()
{

}

void statsOrganizer::updateStats(Character& user, diceRoller& dice)
{
	// Organize stats (high -> low) based on class
	// Also randomizes and sets HP
	switch (user.getClass())
	{
	case BARBARIAN:
		user.setStr(dice.getStats(0));
		user.setCon(dice.getStats(1));
		user.setDex(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setCha(dice.getStats(4));
		user.setInt(dice.getStats(5));

		user.setHP(dice.d12());
		break;
	case BARD:
		user.setCha(dice.getStats(0));
		user.setDex(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setStr(dice.getStats(5));

		user.setHP(dice.d8());
		break;
	case CLERIC:
		user.setWis(dice.getStats(0));
		user.setCha(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setStr(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setDex(dice.getStats(5));

		user.setHP(dice.d8());
		break;
	case DRUID:
		user.setWis(dice.getStats(0));
		user.setInt(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setDex(dice.getStats(3));
		user.setStr(dice.getStats(4));
		user.setCha(dice.getStats(5));

		user.setHP(dice.d8());
		break;
	case FIGHTER:
		user.setStr(dice.getStats(0));
		user.setDex(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setCha(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setWis(dice.getStats(5));

		user.setHP(dice.d10());
		break;
	case MONK:
		user.setDex(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setStr(dice.getStats(3));
		user.setCha(dice.getStats(4));
		user.setInt(dice.getStats(5));

		user.setHP(dice.d8());
		break;
	case PALADIN:
		user.setStr(dice.getStats(0));
		user.setCha(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setDex(dice.getStats(4));
		user.setInt(dice.getStats(5));

		user.setHP(dice.d10());
		break;
	case RANGER:
		user.setDex(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setStr(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setCha(dice.getStats(5));

		user.setHP(dice.d10());
		break;
	case ROGUE:
		user.setDex(dice.getStats(0));
		user.setCha(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setInt(dice.getStats(3));
		user.setStr(dice.getStats(4));
		user.setWis(dice.getStats(5));

		user.setHP(dice.d8());
		break;
	case SORCERER:
		user.setCha(dice.getStats(0));
		user.setCon(dice.getStats(1));
		user.setInt(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setStr(dice.getStats(4));
		user.setDex(dice.getStats(5));

		user.setHP(dice.d6());
		break;
	case WARLOCK:
		user.setCha(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setDex(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setStr(dice.getStats(5));

		user.setHP(dice.d8());
		break;
	case WIZARD:
		user.setInt(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setCha(dice.getStats(3));
		user.setDex(dice.getStats(4));
		user.setStr(dice.getStats(5));

		user.setHP(dice.d6());
		break;
	default:
		user.setInt(1);
		user.setWis(1);
		user.setCon(1);
		user.setCha(1);
		user.setDex(1);
		user.setStr(1);

		user.setHP(1);
		break;
	}

	// Change stats based on race and set speed
	switch (user.getRace())
	{
	case(DRAGONBORN):
		user.setStr(user.getStr() + 2);
		user.setCha(user.getCha() + 1);
		user.setProficiencies("+2 Strength \t+1 Charisma");
		user.setSpeed(30);
		break;
	case(DWARF):
		user.setCon(user.getCon() + 2);
		user.setProficiencies("+2 Constitution");
		user.setSpeed(25);
		break;
	case(ELF):
		user.setDex(user.getDex() + 2);
		user.setProficiencies("+2 Dexterity");
		user.setSpeed(30);
		break;
	case(GNOME):
		user.setInt(user.getInt() + 2);
		user.setProficiencies("+2 Intelligence");
		user.setSpeed(25);
		break;
	case(HALFELF):
		user.setCha(user.getCha() + 2);
		dice.setStats(0, 1);
		dice.setStats(1, 1);
		user.setProficiencies("+2 Charisma, +1 To 2 highest stats");
		user.setSpeed(30);
		break;
	case(HALFLING):
		user.setDex(user.getDex() + 2);
		user.setProficiencies("+2 Dexterity");
		user.setSpeed(25);
	case(HALFORC):
		user.setStr(user.getStr() + 2);
		user.setCon(user.getCon() + 1);
		user.setProficiencies("+2 Strength \t+1 Constitution");
		user.setSpeed(30);
		break;
	case(HUMAN):
		user.setStr(user.getStr() + 1);
		user.setCon(user.getCon() + 1);
		user.setDex(user.getDex() + 1);
		user.setCha(user.getCha() + 1);
		user.setInt(user.getInt() + 1);
		user.setInt(user.getInt() + 1);
		user.setProficiencies("+1 to All");
		user.setSpeed(30);
	case(TIEFLING):
		user.setCha(user.getCha() + 2);
		user.setInt(user.getInt() + 1);
		user.setProficiencies("+2 Charisma \t+1 Intelligence");
		user.setSpeed(30);
	}

	// Calculate and set modifiers
	user.setStrMod(((user.getStr() - 10) / 2));
	user.setIntMod(((user.getInt() - 10) / 2));
	user.setWisMod(((user.getWis() - 10) / 2));
	user.setChaMod(((user.getCha() - 10) / 2));
	user.setConMod(((user.getCon() - 10) / 2));
	user.setDexMod(((user.getDex() - 10) / 2));

	// Set initiative modifier
	user.setInitiative(user.getDexMod());

	// Set armor class
	user.setAC(10 + user.getDexMod());
}

void statsOrganizer::reorganizeStats(Character& user, diceRoller& dice)
{
	int userInput;

	std::cout << "\nYour stats are as follows: \n";

	for (int i = 0; i < 6; i++)
	{
		std::cout << i+1 << " " << dice.statv[i] << std::endl;
	}
}

statsOrganizer::~statsOrganizer()
{

}