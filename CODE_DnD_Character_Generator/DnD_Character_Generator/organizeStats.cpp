/*
* stats: 
*	Strength
*	Dexterity
*	Constitution
*	Intelligence
*	Wisdom
*	Charisma

switch(class)
{
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
}


*/