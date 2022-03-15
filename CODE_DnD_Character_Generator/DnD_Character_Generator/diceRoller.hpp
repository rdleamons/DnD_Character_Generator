#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>

class diceRoller
{
  public: 
    diceRoller();
    ~diceRoller();
    std::vector<int> getStats();

    std::vector<int> statv = {};

    int d20();
    int d12();
    int d10();
    int d8();
    int d6();
    int d4();
    void statsRoll();

}; // end of diceRoller class