#include <iostream>

using namespace std;

#include "Team.hpp"

Team::Team(string Name, int Wins, int Draws, int Loses, int Goals, int Lgoals):name(Name),wins(Wins),draws(Draws),loses(Loses),goals(Goals),lgoals(Lgoals)
{
    points = ((3 * wins) + draws);
}

int Team::Get_Points()
{
    return this->points;
}

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

int Team::Get_Loses()
{
    return this->loses;
}

int Team::Get_Goals()
{
    return this->goals;
}

int Team::Get_Lgoals()
{
    return this->lgoals;
}

Team::~Team(){}