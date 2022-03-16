#pragma once
#include "Character.hpp"
#include "diceRoller.hpp"

class statsOrganizer
{
public:
	void updateStats(Character user, diceRoller dice);
};