/*
* stats: 
*	Strength
*	Dexterity
*	Constitution
*	Intelligence
*	Wisdom
*	Charisma
* 

switch(race)
{
	case(DRAGONBORN):
		strength += 2;
		charisma += 1;
		break;
	case(DWARF):
		constitution += 2;
		break;
	case(ELF):
		dexterity += 2;
		break;
	case(GNOME):
		intelligence += 2;
		break;
	case(HALFELF):
		charisma += 2;
		statsroll[0] += 1;
		statsroll[1] += 1;
		break;
	case(HALFLING):
		dexterity += 2;
	case(HALFORC):
		strength += 2;
		constitution +=1;
		break;
	case(HUMAN):
		strength += 1;
		dexterity += 1;
		constitution += 1;
		intelligence += 1;
		wisdom += 1;
		charisma += 1;
	case(TIEFLING):
		charsima += 2;
		intelligence += 1;
}

switch(class)
{
Character.classtype
case(BARBIAN):
	npc.strength = statsRoll.stats[0];
	npc.constitution = statsRoll.stats[1];
	npc.dexterity = statsRoll.stats[2];
	npc.wisdom = statsRoll.stats[3];
	npc.charisma = statsRoll.stats[4];
	npc.intelligence = statsRoll.stats[5];
	break;

case(BARD):
	npc.charisma = statsRoll.stats[0];
	npc.dexterity = statsRoll.stats[1];
	npc.constituiton = statsRoll.stats[2];
	npc.wisdom = statsRoll.stats[3];
	npc.intelligence = statsRoll.stats[4];
	npc.strength = statsRoll.stats[5];
	break;

case(CLERIC):
	npc.wisdom = statsRoll.stats[0];
	npc.charisma = statsRoll.stats[1];
	npc.constituiton = statsRoll.stats[2];
	npc.stength = statsRoll.stats[3];
	npc.intelligence = statsRoll.stats[4];
	npc.dexterity = statsRoll.stats[5];
	break;

case(DRUID):
	npc.wisdom = statsRoll.stats[0];
	npc.intelligence = statsRoll.stats[1];
	npc.constituiton = statsRoll.stats[2];
	npc.dexterity = statsRoll.stats[3];
	npc.strength = statsRoll.stats[4];
	npc.charisma = statsRoll.stats[5];
	break;

case(FIGHTER):
	npc.strength = statsRoll.stats[0];
	npc.dexterity = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.charisma = statsRoll.stats[3];
	npc.intelligence = statsRoll.stats[4];
	npc.wisdom = statsRoll.stats[5];
	break;

case(MONK):
	npc.dexterity = statsRoll.stats[0];
	npc.wisdom = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.strength = statsRoll.stats[3];
	npc.charisma = statsRoll.stats[4];
	npc.intelligence = statsRoll.stats[5];
	break;

case(PALADIN):
	npc.strength = statsRoll.stats[0];
	npc.charisma = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.wisdom = statsRoll.stats[3];
	npc.dexterity = statsRoll.stats[4];
	npc.intelligence = statsRoll.stats[5];
	break;

case(RANGER):
	npc.dexterity = statsRoll.stats[0];
	npc.wisdom = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.strength = statsRoll.stats[3];
	npc.intelligence = statsRoll.stats[4];
	npc.charisma = statsRoll.stats[5];
	break;

case(ROGUE):
	npc.dexterity = statsRoll.stats[0];
	npc.charisma = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.intelligence = statsRoll.stats[3];
	npc.strength = statsRoll.stats[4];
	npc.wisdom = statsRoll.stats[5];
	break;

case(SORCERER):
	npc.charisma = statsRoll.stats[0];
	npc.constitution = statsRoll.stats[1];
	npc.intelligence = statsRoll.stats[2];
	npc.wisdom = statsRoll.stats[3];
	npc.strength = statsRoll.stats[4];
	npc.dexterity = statsRoll.stats[5];
	break;

case(WARLOCK):
	npc.charisma = statsRoll.stats[0];
	npc.wisdom = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.dexterity = statsRoll.stats[3];
	npc.intelligence = statsRoll.stats[4];
	npc.strength = statsRoll.stats[5];
	break;

case(WIZARD):
	npc.intelligence = statsRoll.stats[0];
	npc.wisdom = statsRoll.stats[1];
	npc.constitution = statsRoll.stats[2];
	npc.intellifence = statsRoll.stats[3];
	npc.dexterity = statsRoll.stats[4];
	npc.strength = statsRoll.stats[5];
	break;
}


*/