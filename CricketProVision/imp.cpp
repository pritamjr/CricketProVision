#include "header.h"
int Player::player_count = 0;
Player::Player()
{
	name = "";
	shirt_no = "";
	average = "";
	icc_ranking = "";
	total_runs = "";
	match_played = "";
	total_wickets = "";
	Team_name = " ";
	player_count++;
}
//setters
void  Player::setname(string name)
{
	this->name = name;
}
void Player::set_shirtno(string shirt_no)
{
	this->shirt_no = shirt_no;
}
void Player::setaverage(string average)
{
	this->average = average;
}
void Player::set_icc_ranking(string iccranking)
{
	this->icc_ranking = iccranking;
}
void Player::set_totalRuns(string totalruns)
{
	this->total_runs = totalruns;
}
void  Player::set_matchpalyed(string matches)
{
	this->match_played = matches;
}
void  Player::set_totalwickets(string wickets)
{
	this->total_wickets = wickets;
}

//getters
string Player::getname()
{
	return name;
}
string  Player::get_shirt_no()
{
	return shirt_no;
}
string Player::getaverage()
{
	return average;
}
string  Player::get_icc_ranking()
{
	return icc_ranking;
}
string Player::get_totalruns()
{
	return total_runs;
}
string  Player::get_match_played()
{
	return match_played;
}
string  Player::get_total_wickets()
{
	return total_wickets;
}
void Player::add_player()
{
	cout << "Enter the team name of player:";
	cin >> Team_name;
	setname(Team_name);
	cout << "Enter the name of player:";
	cin >> name;
	setname(name);
	cout << "Enter the shirt number of player:";
	cin >> shirt_no;
	set_shirtno(shirt_no);
	cout << "ENTER THE ICC RANKING IN EACH FORMAT:";
	cin >> icc_ranking;
	set_icc_ranking(icc_ranking);
	cout << "Enter the average:";
	cin >> average;
	setaverage(average);
	cout << "ENTER THE TOTAL RUNS:";
	cin >> total_runs;
	set_totalRuns(total_runs);
	cout << "ENTER THE NO OF MATCH PLAYED::";
	cin >> match_played;
	set_matchpalyed(match_played);
	cout << "ENTER THE NO OF WICKETS:";
	cin >> total_wickets;
	set_totalwickets(total_wickets);
	ofstream outData;
	outData.open("Player.txt", ios::app);
	//output
	outData << Team_name << " " << name << " " << shirt_no << " " << icc_ranking << " " << average << " " << total_runs << " "
		<< match_played << " " << total_wickets << ' ' << endl;
	outData.close();

}
void Player::Remove_player(Player* P, int size)
{
	string thisname, team_name;
	string str;
	int count = 0;
	cout << "Enter the team name from which the player belongs:" << endl;
	cin >> team_name;
	cout << "Enter the name of the player u want to remove:";
	cin >> thisname;
	ifstream inData;
	inData.open("Player.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		int count = 0;
		int len = 0;
		string str;
		while (getline(inData, str))
		{ 
				inData >> P[count].Team_name;
				inData >> P[count].name;
				inData >> P[count].shirt_no;
				inData >> P[count].icc_ranking;
				inData >> P[count].average;
				inData >> P[count].total_runs;
				inData >> P[count].match_played;
				inData >> P[count].total_wickets;
				count++;
				
		}
		for (int i = 0; i < count; i++)
		{
				cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
					<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
		}
		for (int f = 0; f < count; f++)
		{
				if (P[f].Team_name == team_name)
				{
					if (P[f].name == thisname)
					{
						P[f].Team_name = " ";
						P[f].name = "-";
						P[f].shirt_no = "-";
						P[f].icc_ranking = "-";
						P[f].average = "-";
						P[f].total_runs = "-";
						P[f].match_played = "-";
						P[f].total_wickets = "-";
					
						break;
					}
					cout << endl;
				}
		}
			ofstream outData;
			outData.open("Player.txt", ios::trunc);
			for (int i = 0; i < count; i++)
			{

				outData << P[i].Team_name << " " << P[i].name << " " << P[i].shirt_no << " " << P[i].icc_ranking << " " << P[i].average << " " << P[i].total_runs << " "
					<< P[i].match_played << " " << P[i].total_wickets << ' ' << endl;
			}
	}
	inData.close();
}

void Player::search_player(Player* P, int size)
{
	string thisname, team_name;
	string str;
	int count = 0;
	cout << "Enter the team name from which the player belongs:" << endl;
	cin >> team_name;
	cout << "Enter the name of the player you want to remove:";
	cin >> thisname;
	ifstream inData;
	inData.open("Player.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		int count = 0;
		int len = 0;
		string str;
		while (getline(inData, str))
		{
			inData >> P[count].Team_name;
			inData >> P[count].name;
			inData >> P[count].shirt_no;
			inData >> P[count].icc_ranking;
			inData >> P[count].average;
			inData >> P[count].total_runs;
			inData >> P[count].match_played;
			inData >> P[count].total_wickets;
			count++;

		}
		for (int i = 0; i < count-1; i++)
		{
			cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
				<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
		}
		for (int f = 0; f < count; f++)
		{
			if (P[f].Team_name == team_name)
			{
				if (P[f].name == thisname)
				{
					cout << "THE PLAYER FOUND AT " << f << " index" << endl;
					break;
				}
				cout << endl;
			}
		}
	

	}
inData.close();
}
void Player::update_player(Player* P, int size)
{
	string thisname, team_name;
	string str;
	int count = 0;
	cout << "Enter the team name from which the player belongs:" << endl;
	cin >> team_name;
	cout << "Enter the name of the player you want to update:";
	cin >> thisname;
	ifstream inData;
	inData.open("Player.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		int count = 0;
		int len = 0;
		string str;
		while (getline(inData, str))
		{
			inData >> P[count].Team_name;
			inData >> P[count].name;
			inData >> P[count].shirt_no;
			inData >> P[count].icc_ranking;
			inData >> P[count].average;
			inData >> P[count].total_runs;
			inData >> P[count].match_played;
			inData >> P[count].total_wickets;
			count++;

		}
		for (int i = 0; i < count; i++)
		{
			cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
				<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
		}
		for (int f = 0; f < count; f++)
		{
			if (P[f].Team_name == team_name)
			{
				if (P[f].name == thisname)
				{
					add_player();
					P[f].Team_name = Team_name;
					P[f].name = name;
					P[f].shirt_no = shirt_no;
					P[f].icc_ranking = icc_ranking;
					P[f].average = average;
					P[f].total_runs = total_runs;
					P[f].match_played = match_played;
					P[f].total_wickets = total_wickets;
					break;
				}
				cout << endl;
			}
		}
		ofstream outData;
		outData.open("Player.txt", ios::trunc);
		for (int i = 0; i < count; i++)
		{

			outData << P[i].Team_name << " " << P[i].name << " " << P[i].shirt_no << " " << P[i].icc_ranking << " " << P[i].average << " " << P[i].total_runs << " "
				<< P[i].match_played << " " << P[i].total_wickets << ' ' << endl;
		}
		outData.close();


	}
	inData.close();

}

//to write data in file
//functions which are required
void Player::display_team(Player* P)
{
	int input;
	ifstream inData;
	inData.open("Player.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		int count = 0;
		string str;
		while (getline(inData, str))
		{
			inData >> P[count].Team_name;
			inData >> P[count].name;
			inData >> P[count].shirt_no;
			inData >> P[count].icc_ranking;
			inData >> P[count].average;
			inData >> P[count].total_runs;
			inData >> P[count].match_played;
			inData >> P[count].total_wickets;
			count++;

		}
		cout << "Enter the name of the team you want to display:" << endl;
		cout << "PRESS 1 TO DISPLAY PAKISTANI TEAM" << endl;
		cout << "PRESS 2 TO DISPLAY African TEAM" << endl;
		cout << "PRESS 3 TO DISPLAY Netherlands  TEAM" << endl;
		cout << "PRESS 4 TO DISPLAY New Zealand TEAM" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
		{
			for (int i = 0; i < count; i++)
			{
				if (P[i].Team_name == "pakistan")
				{
					cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
						<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
				}
			}
			break;
		}
		case 2:
		{
			for (int i = 0; i < count; i++)
			{
				if (P[i].Team_name == "africa")
				{
					cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
						<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
				}
			}
			break;
		}
		case 3:
		{
			for (int i = 0; i < count; i++)
			{
				if (P[i].Team_name == "netherland")
				{
					cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
						<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
				}
			}
			break;
		}
		case 4:
		{
			for (int i = 0; i < count; i++)
			{
				if (P[i].Team_name == "newzealand")
				{
					cout << "THE NAME OF THE TEAM IS:" << P[i].Team_name << "\nTHE NAME OF THE PLAYER IS: " << P[i].name << "\nTHE SHIRT NO OF THE PLAYER IS: " << P[i].shirt_no << "\nTHE ICC RANKING OF THE PLAYER IS: " << P[i].icc_ranking << "\nThe average of the player is: " << P[i].average << "\nTHE TOTAL RUNS OF THE PLAYER IS: " << P[i].total_runs << "\nTHE TOTAL MATCHES PLAYED BY PLAYER IS: "
						<< P[i].match_played << "\nTHE TOTAL WICKETS OF THE PLAYER IS: " << P[i].total_wickets << ' ' << endl;
				}
			}
			break;
		}
		}
	}
}




//for team class
void Team::set_teamname(string name)
{
	this->team_name = name;
}
void Team::set_team_icc_ranking(int iccranking)
{
	this->team_icc_ranking = iccranking;
}
void Team::set_numberofplayer(int no_of_players)
{
	this->no_of_players = no_of_players;
}
void  Team::set_totalmatchesWon(int total_won)
{
	this->total_matches_won = total_won;
}
void Team::set_total_matcheslost(int total_lost)
{
	this->total_matches_lost = total_lost;
}
void Team::set_teamcaptain(string team_captain)
{
	this->team_captain = team_captain;
}
void Team::set_teamcoach(string team_coach)
{
	this->team_coach = team_coach;
}
void Team::set_admin_username(string username)
{
	this->admin_username = username;
}
void Team::set_admin_password(string password)
{
	this->admin_password = password;
}
//getters

string Team::get_team_name()
{
	return team_name;
}
int Team::get_team_icc_ranking()
{
	return team_icc_ranking;
}
int  Team::get_no_of_players()
{
	return no_of_players;
}
int Team::get_totalmatches_won()
{
	return total_matches_won;
}
int Team::get_totalmatchesa_lost()
{
	return total_matches_lost;
}
string Team::get_teamcaptain()
{
	return team_captain;
}
string Team::get_team_coach()
{
	return team_coach;
}
string Team::get_username()
{
	return admin_username;
}
string Team::get_password()
{
	return admin_password;
}
void Team::add_player()
{
	obj.add_player();
}

//
void Team::remove_player(Player P[], int size)
{
	obj.Remove_player(P, 11);
}
void Team::search_player(Player P[], int size)
{
	obj.search_player(P, 11);
}
void Team::update_player(Player P[], int size)
{
	obj.update_player(P, 11);
}


// Team function

int Team::access_data(Team* T)
{
	int n = 0;
	string team;
	string username, password;
	cout << "Enter the team name you want to access:";
	cin >> team;
	cout << "Enter username and password:";
	cin >> username >> password;
	ifstream inData;
	int count = 0;
	inData.open("Team.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		string str;
		while (getline(inData, str))
		{
			inData >> T[count].team_name;
			inData >> T[count].icc_ranking;
			inData >> T[count].no_of_players;
			inData >> T[count].total_matches_won;
			inData >> T[count].total_matches_lost;
			inData >> T[count].team_captain;
			inData >> T[count].team_coach;
			inData >> T[count].admin_username;
			inData >> T[count].admin_password;
			count++;

		}
		for (int i = 0; i < count; i++)
		{
			if (team == T[i].team_name)
			{
				if (username == T[i].admin_username && password == T[i].admin_password)
				{
					cout << "You can access everthing u want" << endl;
					n = 1;
					break;
				}
			}
		}

	}
	return n;
}
void Team::Add_team(Team* T)
{
	cout << "Enter the team name:";
	cin >> team_name;;
	setname(team_name);
	cout << "Enter the team icc ranking:";
	cin >> team_icc_ranking;
	set_team_icc_ranking(team_icc_ranking);
	cout << "Enter the no of players in a team:";
	cin >> no_of_players;
	set_numberofplayer(no_of_players);
	cout << "Enter the total matches won:";
	cin >> total_matches_won;
	set_totalmatchesWon(total_matches_won);
	cout << "Enter the total matches lost:";
	cin >> total_matches_lost;
	set_total_matcheslost(total_matches_lost);
	cout << "Enter the team captain:";
	cin >> team_captain;
	set_teamcaptain(team_captain);
	cout << "Enter the team coach:";
	cin >> team_coach;
	set_teamcoach(team_coach);
	cout << "Enter the username to acess the team:";
	cin >> admin_username;
	set_admin_username(admin_username);
	cout << "Enter the password to access the team:";
	cin >> admin_password;
	set_admin_password(admin_password);
	ifstream inData;
	int count = 0;
	inData.open("Team.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		string str;
		while (getline(inData, str))
		{
			count++;
		}
		for (int i = 0; i < count+1; i++)
		{
			if (team_name=="pakistan"|| team_name == "africa" ||team_name == "netherland" || team_name == "newzealand"  )
			{
				ofstream outData;
				outData.open("Team.txt", ios::app);
				//output
				outData << team_name << setw(10) << team_icc_ranking << setw(10) << no_of_players << setw(10) << total_matches_won << setw(10) << total_matches_lost << setw(10) << team_captain << setw(10)
					<< team_coach << setw(10) << admin_username << setw(10) << admin_password << ' ' << endl;
				outData.close();
			}
		}
	}
	
}

void Team::update_coach(Team* T)
{
	string namee;
	string coach_name;

	string str;
	int count = 0;
	ifstream inData;
	inData.open("Team.txt", ios::in);
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		while (getline(inData, str))
		{
			inData >> T[count].team_name;
			inData >> T[count].icc_ranking;
			cout << T[count].icc_ranking << endl;
			inData >> T[count].no_of_players;
			inData >> T[count].total_matches_won;
			inData >> T[count].total_matches_lost;
			inData >> T[count].team_captain;
			inData >> T[count].team_coach;
			inData >> T[count].admin_username;
			inData >> T[count].admin_password;
			count++;
		}
		for (int i = 0; i < count-1; i++)
		{
			cout << "THE TEAM NAME OF THE COACH IS:" << T[i].team_name << "\nTHE COACH NAME IS:" << T[i].team_coach << endl;
		}
		cout << "Enter the team name of the coach:";
		cin >> team_name;
		cout << "Enter the coach name you want to update:";
		cin >> coach_name;
		for (int i = 0; i <= count; i++)
		{
			if (T[i].team_name==namee)
			{
				
					cout << "Enter the team name of the coach:";
					cin >> namee;
					cout << "Enter the coach name:";
					cin >> coach_name;
					T[i].team_name = namee;
					T[i].team_coach = coach_name;
					break;
			}
		}

		ofstream outData;
		outData.open("Team.txt", ios::trunc);
		for (int i = 0; i < count-1; i++)
		{
			//output
			outData << T[i].team_name << " " << T[i].team_icc_ranking << " " << T[i].no_of_players << " "
				<< T[i].total_matches_won << " " << T[i].total_matches_lost << " " << T[i].team_captain << " "
				<< T[i].team_coach << " " << T[i].admin_username << " " << T[i].admin_password << ' ' << endl;
		}
		outData.close();
	}
	inData.close();

}

void Team::Update_captain(Team* T)
{

	string namee;
	string captain_name;

	string str, temp;
	int count = 0;
	ifstream inData;
	inData.open("Team.txt", ios::in);
	cout << "Enter the coach name you want to update:";
	cin >> captain_name;
	cout << "Enter the team name of the coach:";
	cin >> namee;
	if (!inData.is_open())
	{
		cout << "Error opening file";
	}
	else
	{
		while (getline(inData, str))
		{
			inData >> T[count].team_name;
			inData >> T[count].icc_ranking;
			inData >> T[count].no_of_players;
			inData >> T[count].total_matches_won;
			inData >> T[count].total_matches_lost;
			inData >> T[count].team_captain;
			inData >> T[count].team_coach;
			inData >> T[count].admin_username;
			inData >> T[count].admin_password;
			count++;
		}
		for (int i = 0; i < count-1 ; i++)
		{
			cout << "THE TEAM NAME OF THE captain IS:" << T[i].team_name << "\nTHE captain NAME IS:" << T[i].team_coach << endl;
		}
		for (int i = 0; i < count; i++)
		{
			if (namee == T[i].team_name)
			{
				if (captain_name == T[i].team_captain)
				{
					cout << "Enter the team name of the captain:";
					cin >> namee;
					cout << "Enter the captain name:";
					cin >> captain_name;
					T[i].Team_name = namee;
					T[i].team_captain = captain_name;
					break;
				}
			}
		}

		ofstream outData;
		outData.open("Team.txt", ios::trunc);
		for (int i = 0; i < count-1; i++)
		{
			//output
			outData << T[i].team_name << " " << T[i].team_icc_ranking << " " << T[i].no_of_players << " "
				<< T[i].total_matches_won << " " << T[i].total_matches_lost << " " << T[i].team_captain << " "
				<< T[i].team_coach << " " << T[i].admin_username << " " << T[i].admin_password << ' ' << endl;
		}
		outData.close();
	}
	inData.close();

}
void Team::display_team(Player* P)
{
	obj.display_team(P);

}

Match::Match()
{

}

void Match::set_team(string Team1, string Team2)
{
	this->team1 = Team1;
	this->team2 = Team2;
}



//MATCH TEAM IMPLIMENTATION

void Match::set_runs(int runs)
{
	this->mostruns = runs;
}
void Match::set_fours(int fours)
{
	this->mostfours = fours;
}
void Match::set_sixes(int sixes)
{
	this->mostsixes = sixes;
}
void Match::set_best_strike(int strike_rate)
{
	this->beststrikerate = strike_rate;
}
void Match::set_centuries(int century)
{
	this->mostcenturies = century;
}
void Match::set_most_wickets(int wickeets)
{
	this->mostwickets = wickeets;
}
void Match::set_high_average(int average)
{
	this->highestaverage = average;
}
string Match::conduct_match(Match *m1)
{
	unsigned int ra;
	srand(time(NULL));
	ra = rand() % 2 + 1;
	int choice, count = 0;
	string read;
	string win;
	cout << "Press 1-DO U WANT TO CONDUCT ALREADY SECHDULED MATCH" << endl;
	cout << "Press 2-DO U WANT TO CONDUCT NEW MATCH" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		ifstream inData;
		inData.open("Already_schdule_matches.txt", ios::in);
		if (!inData.is_open())
		{
			cout << "Error opening file";
		}
		else
		{
			cout << "THE ALREADY SCHDULE MATCHES ARE" << endl;
			while (getline(inData, read))
			{
				inData >> m1[count].team1 >> m1[count].team2;
				cout << m1[count].team1 << " " << m1[count].team2 << endl;
				count++;

			}

			cout << "Enter your choice for team1 and team2" << endl;
			cin >> team1 >> team2;
			set_team(team1, team2);
			cout << "THE match is going to held between " << team1 << " and " << team2 << endl;
			cout << "Enter the match type:";
			cin >> match_type;
			Tournament_name = "single";
			commenttors = "RAMIZ RAJA";
			umpires = "Ahmed shah";
			if (team1 == "pakistan")
			{
				date = "31 july 2023";
				venue = "Pakistan";


			}
			else if (team1 == "netherland")
			{
				date = "4 august 2023";
				venue = "India";
			}
			else if (team1 == "south africa")
			{
				date = "5 august 2023";
				venue = "England";
			}
			else if (team1 == "new zealand")
			{
				date = "9 august 2023";
				venue = "neatherland";
			}
			if (ra == 1)
			{
				win = team1;
				return win;
			}
			else
			{
				win = team2;
				return win;
			}
		}
	}
	case 2:
	{
		win=sechdule_match(m1);
		return win;

	}
	}
	
	
}
string Match::sechdule_match(Match* m1)
{
	unsigned int ran;
	string win, read;
	int choice, count = 0;
	cout << "select is it is a tournament or a single match" << endl;
	cout << "PRESS 1 FOR SINGLE" << endl;
	cout << "press 2 for tournament" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		ifstream inData;
		inData.open("already_schdule_matches.txt", ios::in);
		if (!inData.is_open())
		{
			cout << "Error opening file";
		}
		else
		{
			cout << "THE ALREADY SCHDULE MATCHES ARE" << endl;
			while (getline(inData, read))
			{
				inData >> m1[count].team1 >> m1[count].team2;
				cout << m1[count].team1 << " " << m1[count].team2 << " ";
				count++;

			}

		}
		srand(time(NULL));
		ran = rand() % 2 + 1;
		cout << "Select the team between which you want to conduct match" << endl;
		cout << "THE TEAMS ARE:1-pakistan   2-africa  3-netherland   4-new zealand" << endl;
		cout << "Enter the first team:";
		cin >> team1;
		cout << "Enter second team:";
		cin >> team2;

		for (int i = 0; i < count+1; i++)
		{
			if (m1[i].team1 != team1 || m1[i].team2 != team2)
			{
				cout << "The match is going to held between " << team1 << " and " << team2 << endl;
				set_team(team1, team2);
				cout << "Enter the match type:";
				cin >> match_type;
				Tournament_name = "single";
				commenttors = "RAMIZ RAJA";
				umpires = "Ahmed shah";
				if (team1 == "pakistan")
				{
					date = "31 july 2023";
					venue = "Pakistan";


				}
				else if (team1 == "netherland")
				{
					date = "4 august 2023";
					venue = "India";
				}
				else if (team1 == "south africa")
				{
					date = "5 august 2023";
					venue = "England";
				}
				else if (team1 == "newzealand")
				{
					date = "9 august 2023";
					venue = "netherland";
				}
				
				fstream outData;
				outData.open("already_schdule_matches.txt", ios::app);
				outData << team1 << " " << team2 << " " << endl;

				outData.close();
			}
			break;
		}
		}
		if (ran == 1)
		{
			win = team1;
			return win;
		}
		else
		{
			win = team2;
			return win;
		}
		case 2:
		{
			cout << "TOURNAMENT IS GOING TO HELD " << endl;
			cout << "THE TEAMS ARE \n" << "-----PAKISTAN------\n" << "-----AFRICA-----\n" << "-----NETHERLAND------\n" << "-----NEW ZEALAND-----\n";
			srand(time(NULL));
			ran = rand() % 4 + 1;
			if (ran == 1)
			{
				win = "pakistan";
				return win;
				break;
			}
			else if (ran == 2)
			{
				win = "africa";
				return win;
				break;
			}
			else if (ran == 3)
			{
				win = "netherland";
				return win;
				break;
			}
			else if (ran == 2)
			{
				win = "newzealand";
				return win;
				break;
			}
		}
	}
	
}


void Match::update_world_rcord(Match m1)
{
	ofstream outData;
	outData.open("update_record.txt", ios::app);
	outData << mostruns << "\t" << mostsixes << "\t" << mostfours << "\t" << mostcenturies << "\t" << highestaverage << " " << beststrikerate << "\t"
		<< mostwickets <<  ' ' << endl;
	outData.close();
}