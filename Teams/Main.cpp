#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Team.hpp"

void Print_Points(vector <Team*> League);
void Delete_Teams(vector <Team*>& League);

int main()
{
	vector <Team*> League;
	Team* ptr = new Team("Lions", 1, 4, 1, 5, 4);
	League.push_back(ptr);
	ptr = new Team("Real", 2, 6, 3, 5, 6);
	League.push_back(ptr);
	ptr = new Team("Barcelona", 3, 6, 6, 10, 3);
	League.push_back(ptr);
	ptr = new Team("Szczecin", 4, 5, 6, 9, 7);
	League.push_back(ptr);
	ptr = new Team("Panther", 5, 3, 4, 8, 8);
	League.push_back(ptr);
	ptr = new Team("Navi", 8, 3, 8, 3, 6);
	League.push_back(ptr);
	ptr = new Team("Sharks", 3, 7, 4, 7, 5);
	League.push_back(ptr);
	ptr = new Team("Dinamo", 8, 4, 4, 7, 4);
	League.push_back(ptr);
	ptr = new Team("Gold", 2, 5, 3, 7, 4);
	League.push_back(ptr);
	ptr = new Team("Silver", 7, 7, 5, 3, 7);
	League.push_back(ptr);
	cout << "Teams were added to League" << endl << endl << "|Tabel of teams points|" << endl;
	Print_Points(League);
	//

	//
	ptr = NULL;
	Delete_Teams(League);
	League.clear();
	cout << "League was deleted" << endl;
	return 0;
}

void Print_Points(vector <Team*> League)
{
	for (auto i : League)
		cout << "| " << i->Get_Name() << " : " << ((3 * (i->Get_Wins())) + (i->Get_Draws())) << " points" << endl;
}

void Delete_Teams(vector <Team*>& League)
{
	for (auto i : League)
	{
		delete i;
		i = NULL;
	}
	cout << endl << "Teams were deleted" << endl;
}