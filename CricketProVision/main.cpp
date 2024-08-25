#include"header.h"
int main()
{
	Player p;
	Player* P = new Player[11];
	Match m;
	Team *obj;
	obj = new Team[4];
	Match *m1;
	m1 = new Match[10];
	int input;
	int n=m.access_data(obj);
	if (n == 1)
	{
		cout << "PRESS 1 TO ADD THE PLAYER" << endl;
		cout << "PRESS 2 TO REMOVE PLAYER" << endl;
		cout << "PRESS 3 TO SEARCH FOR A PLAYER" << endl;
		cout << "PRESS 4 TO UPDATE PLAYER" << endl;
		cout << "PRESS 5 TO UPDATE COACH" << endl;
		cout << "PRESS 6 TO UPDATE CAPTAIN" << endl;
		cout << "PRESS 7 TO DISPLAY TEAM" << endl;
		cout << "PRESS 8 TO ADD TEAM:" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
		{
			m.add_player();
			break;

		}
		case 2:
		{
			m.Remove_player(P, 11);
			break;
		}
		case 3:
		{
			m.search_player(P, 11);
			break;
		}
		case 4:
		{
			m.update_player(P, 11);
			break;
		}
		case 5:
		{
			m.update_coach(obj);
			break;
		}
		case 6:
		{
			m.Update_captain(obj);
			break;
		}
		case 7:
		{
			m.display_team(P);
			break;
		}
		case 8:
		{
			m.Add_team(obj);
		}

		}
	}
	else
	{
		cout << "You have entered the wrong informtion" << endl;
	}
	int  i;
	int mostruns, mostsixes, mostfours, mostcenturies, highestaverage, beststrikerate, mostwickets;
	
	cout << "1-do u want to conduct a match \n 2- u want to schedule a match:";
	cin >> n;
	switch (n)
		{
		case 1:
		{
			string win=m.conduct_match(m1);
			mostruns = rand() % 100 + 1;
			mostfours = rand() % 100 + 1;
			mostsixes = rand() % 100 + 1;
			mostcenturies = rand() % 100 + 1;
			mostwickets = rand() % 100 + 1;
			beststrikerate = rand() % 10 + 1;
			highestaverage = rand() % 100 + 1;

			if (win == "pakistan")
			{
				m.set_fours(mostfours);
				m.set_sixes(mostsixes);
				m.set_runs(mostruns);
				m.set_centuries(mostcenturies);
				m.set_most_wickets(mostwickets);
				m.set_best_strike(beststrikerate);
				m.set_high_average(highestaverage);
				m.update_world_rcord(m);
				cout << "THE WON TEAM NAME IS" << win << endl;
				cout << "most runs: " << mostruns << endl;
				cout << "Most sixes: " << mostsixes << endl;
				cout << "Most fours: " << mostfours << endl;
				cout << "Most centuries: " << mostcenturies << endl;
				cout << "Highest average: " << highestaverage << endl;
				cout << "Most wickets: " << mostwickets << endl;
				cout << "strike rate:" << beststrikerate << endl;
			}
			else if(win=="africa")
			{
				cout << "south africa won" << endl;
				m.set_fours(mostfours);
				m.set_sixes(mostsixes);
				m.set_runs(mostruns);
				m.set_centuries(mostcenturies);
				m.set_most_wickets(mostwickets);
				m.set_best_strike(beststrikerate);
				m.set_high_average(highestaverage);
				m.update_world_rcord( m);
				cout << "most runs: " << mostruns << endl;
				cout << "Most sixes: " << mostsixes << endl;
				cout << "Most fours: " << mostfours << endl;
				cout << "Most centuries: " << mostcenturies << endl;
				cout << "Highest average: " << highestaverage << endl;
				cout << "Most wickets: " << mostwickets << endl;
				cout << "strike rate:" << beststrikerate << endl;
			}
			else if (win == "newzealand")
			{
				cout << "new zealand won" << endl;
				i = 3;
				m.set_fours(mostfours);
				m.set_sixes(mostsixes);
				m.set_runs(mostruns);
				m.set_centuries(mostcenturies);
				m.set_most_wickets(mostwickets);
				m.set_best_strike(beststrikerate);
				m.set_high_average(highestaverage);
				m.update_world_rcord( m);
				cout << "most runs: " << mostruns << endl;
				cout << "Most sixes: " << mostsixes << endl;
				cout << "Most fours: " << mostfours << endl;
				cout << "Most centuries: " << mostcenturies << endl;
				cout << "Highest average: " << highestaverage << endl;
				cout << "Most wickets: " << mostwickets << endl;
				cout << "strike rate:" << beststrikerate << endl;
			}
			else if (win == "netherland")
			{
				cout << "netherland won" << endl;
				m.set_fours(mostfours);
				m.set_sixes(mostsixes);
				m.set_runs(mostruns);
				m.set_centuries(mostcenturies);
				m.set_most_wickets(mostwickets);
				m.set_best_strike(beststrikerate);
				m.set_high_average(highestaverage);
				m.update_world_rcord( m);
				cout << "most runs: " << mostruns << endl;
				cout << "Most sixes: " << mostsixes << endl;
				cout << "Most fours: " << mostfours << endl;
				cout << "Most centuries: " << mostcenturies << endl;
				cout << "Highest average: " << highestaverage << endl;
				cout << "Most wickets: " << mostwickets << endl;
				cout << "strike rate:" << beststrikerate << endl;
			}

			break;
			
		}
		case 2:
			{
			m.sechdule_match(m1); 
			break;
			}
	}
}

