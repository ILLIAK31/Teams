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

ostream& operator<<(ostream& output, const Team& team)
{
    output << endl << "Team : " << team.name << "\t" << "\033[1;32m" << "Wins : " << team.wins << "\033[0m" << "\t" << "Draws : " << team.draws << "\t" << "\033[1;31m" <<"Loses : " << team.loses << "\033[0m" << "\t" << "\033[1;32m" << "Goals : " << team.goals << "\033[0m" << "\t" << "\033[1;31m" << "Lgoals : " << team.lgoals << "\033[0m" << endl;
    return output;
}

Team::~Team(){}