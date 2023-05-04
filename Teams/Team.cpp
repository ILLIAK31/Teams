#include <iostream>

using namespace std;

#include "Team.hpp"

Team::Team(string Name, int Wins, int Draws, int Loses, int Goals, int Lgoals):name(Name),wins(Wins),draws(Draws),loses(Loses),goals(Goals),lgoals(Lgoals){}

string Team::Get_Name()
{
    return this->name;
}

int Team::Get_Wins()
{
    return this->wins;
}

int Team::Get_Draws()
{
    return this->draws;
}

Team::~Team(){}

