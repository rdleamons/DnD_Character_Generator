#include "organizeStats.hpp"
#include <iostream>

void statsOrganizer::updateStats(Character user, diceRoller dice)
{
	// Organize stats based on class
	switch (user.getClass())
	{
	case(BARBARIAN):
		user.setStr(dice.getStats(0));
		user.setCon(dice.getStats(1));
		user.setDex(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setCha(dice.getStats(4));
		user.setInt(dice.getStats(5));
		break;

	case(BARD):
		user.setCha(dice.getStats(0));
		user.setDex(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setStr(dice.getStats(5));
		break;

	case(CLERIC):
		user.setWis(dice.getStats(0));
		user.setCha(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setStr(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setDex(dice.getStats(5));
		break;

	case(DRUID):
		user.setWis(dice.getStats(0));
		user.setInt(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setDex(dice.getStats(3));
		user.setStr(dice.getStats(4));
		user.setCha(dice.getStats(5));
		break;

	case(FIGHTER):
		user.setStr(dice.getStats(0));
		user.setDex(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setCha(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setWis(dice.getStats(5));
		break;

	case(MONK):
		user.setDex(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setStr(dice.getStats(3));
		user.setCha(dice.getStats(4));
		user.setInt(dice.getStats(5));
		break;

	case(PALADIN):
		user.setStr(dice.getStats(0));
		user.setCha(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setDex(dice.getStats(4));
		user.setInt(dice.getStats(5));
		break;

	case(RANGER):
		user.setDex(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setStr(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setCha(dice.getStats(5));
		break;

	case(ROGUE):
		user.setDex(dice.getStats(0));
		user.setCha(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setInt(dice.getStats(3));
		user.setStr(dice.getStats(4));
		user.setWis(dice.getStats(5));
		break;

	case(SORCERER):
		user.setCha(dice.getStats(0));
		user.setCon(dice.getStats(1));
		user.setInt(dice.getStats(2));
		user.setWis(dice.getStats(3));
		user.setStr(dice.getStats(4));
		user.setDex(dice.getStats(5));
		break;

	case(WARLOCK):
		user.setCha(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setDex(dice.getStats(3));
		user.setInt(dice.getStats(4));
		user.setStr(dice.getStats(5));
		break;

	case(WIZARD):
		user.setInt(dice.getStats(0));
		user.setWis(dice.getStats(1));
		user.setCon(dice.getStats(2));
		user.setCha(dice.getStats(3));
		user.setDex(dice.getStats(4));
		user.setStr(dice.getStats(5));
		break;
	}



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

	// Set armor class
	// user.setAC(10 + dexModifier) 
}



