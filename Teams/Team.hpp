#pragma once

class Team
{
private:
	string name;
	int wins, draws, loses, goals, lgoals , points;
public:
	Team(string Name, int Wins, int Draws, int Loses, int Goals, int Lgoals);
	string Get_Name();
	int Get_Points();
	int Get_Wins();
	int Get_Draws();
	int Get_Loses();
	int Get_Goals();
	int Get_Lgoals();
	~Team();
};