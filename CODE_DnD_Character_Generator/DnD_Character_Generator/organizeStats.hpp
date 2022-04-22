#pragma once
#include "Character.hpp"
#include "diceRoller.hpp"

// Class to organize given stats based on race and class
class statsOrganizer
{
public:
	statsOrganizer();
	~statsOrganizer();
	void updateStats(Character &user, diceRoller &dice);
	void updateRaceBonuses(Character& user, diceRoller& dice);
	void reorganizeStats(Character& user, diceRoller& dice);
};