#pragma once

class Team
{
private:
	string name;
	int wins, draws, loses, goals, lgoals;
public:
	Team(string Name, int Wins, int Draws, int Loses, int Goals, int Lgoals);
	string Get_Name();
	int Get_Wins();
	int Get_Draws();
	~Team();
};