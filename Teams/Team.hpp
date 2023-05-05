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
	friend ostream& operator<<(ostream& output, const Team& team);
	bool operator>(const Team& other)const;
	~Team();
};