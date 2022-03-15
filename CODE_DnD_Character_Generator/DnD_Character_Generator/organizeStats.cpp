/*
* stats: 
*	Strength
*	Dexterity
*	Constitution
*	Intelligence
*	Wisdom
*	Charisma
* 
*/
#include "Character.h"
#include "diceRoller.hpp"
//#include "datatypes.h"

void raceSats(Character user)
{
	diceRoller dice;

	// Change stats based on class
	switch (user.getRace())
	{
	case(DRAGONBORN):
		user.setStr(user.getStr() + 2);
		user.setCha(user.getCha() + 1);
		// user.setSpeed(30);
		break;
	case(DWARF):
		user.setCon(user.getCon() + 2);
		// user.setSpeed(25);
		break;
	case(ELF):
		user.setDex(user.getDex() + 2);
		// user.setSpeed(30);
		break;
	case(GNOME):
		user.setInt(user.getInt() + 2);
		// user.setSpeed(25);
		break;
	case(HALFELF):
		user.setCha(user.getCha() + 2);
		// statsroll[0] += 1;
		// statsroll[1] += 1;
		// user.setSpeed(30);
		break;
	case(HALFLING):
		user.setDex(user.getDex() + 2);
		// user.setSpeed(25);
	case(HALFORC):
		user.setStr(user.getStr() + 2);
		user.setCon(user.getCon() + 1);
		// user.setSpeed(30);
		break;
	case(HUMAN):
		user.setStr(user.getStr() + 1);
		user.setCon(user.getCon() + 1);
		user.setDex(user.getDex() + 1);
		user.setCha(user.getCha() + 1);
		user.setInt(user.getInt() + 1);
		user.setInt(user.getInt() + 1);
		// user.setSpeed(30);
	case(TIEFLING):
		user.setCha(user.getCha() + 2);
		user.setInt(user.getInt() + 1);
		// user.setSpeed(30);
	}


	// Organize stats based on class
	switch (user.getClass())
	{
	case(BARBARIAN):
		user.setStr(dice.getStats());
		user.setCon();
		user.setDex();
		user.setWis();
		user.setCha();
		user.setInt();
		break;

	case(BARD):
		user.setCha();
		user.setDex();
		user.setCon();
		user.setWis();
		user.setInt();
		user.setStr();
		break;

	case(CLERIC):
		user.setWis();
		user.setCha();
		user.setCon();
		user.setStr();
		user.setInt();
		user.setDex();
		break;

	case(DRUID):
		user.setWis();
		user.setInt();
		user.setCon();
		user.setDex();
		user.setStr();
		user.setCha();
		break;

	case(FIGHTER):
		user.setStr();
		user.setDex();
		user.setCon();
		user.setCha();
		user.setInt();
		user.setWis();
		break;

	case(MONK):
		user.setDex();
		user.setWis();
		user.setCon();
		user.setStr();
		user.setCha();
		user.setInt();
		break;

	case(PALADIN):
		user.setStr();
		user.setCha();
		user.setCon();
		user.setWis();
		user.setDex();
		user.setInt();
		break;

	case(RANGER):
		user.setDex();
		user.setWis();
		user.setCon();
		user.setStr();
		user.setInt();
		user.setCha();
		break;

	case(ROGUE):
		user.setDex();
		user.setCha();
		user.setCon();
		user.setInt();
		user.setStr();
		user.setWis();
		break;

	case(SORCERER):
		user.setCha();
		user.setCon();
		user.setInt();
		user.setWis();
		user.setStr();
		user.setDex();
		break;

	case(WARLOCK):
		user.setCha();
		user.setWis();
		user.setCon();
		user.setDex();
		user.setInt();
		user.setStr();
		break;

	case(WIZARD):
		user.setInt();
		user.setWis();
		user.setCon();
		user.setCha();
		user.setDex();
		user.setStr();
		break;
	}

	// Set armor class
	// user.setAC(10 + dexModifier) 
}

void classStats(Character user)
{
	

}


