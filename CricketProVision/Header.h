#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<iomanip>
using namespace std;
class Player
{
protected:
	string name;
	string shirt_no;
	string average;
	string icc_ranking;
	string total_runs;
	string match_played;
	string total_wickets;
	string Team_name;
	static int player_count;
public:
	Player();
	//setters
	void setname(string name);
	void set_shirtno(string shirt_no);
	void setaverage(string average);
	void set_icc_ranking(string iccranking);
	void set_totalRuns(string totalruns);
	void set_matchpalyed(string matches);
	void set_totalwickets(string wickets);

	//getters
	string getname();
	string get_shirt_no();
	string getaverage();
	string get_icc_ranking();
	string get_totalruns();
	string get_match_played();
	string get_total_wickets();

	//functions which are required
	virtual void add_player();
	virtual void Remove_player(Player* P, int size);
	virtual void search_player(Player* P, int size);
	virtual void update_player(Player* P, int size);
	virtual void display_team(Player *P);
};
class Team :public Player
{
protected:
	string team_name;
	int team_icc_ranking;
	int no_of_players;
	int total_matches_won;
	int total_matches_lost;
	string team_captain;
	string team_coach;
	string admin_username;
	string admin_password;
	string Team_name;
	Player obj;
public:
	void set_teamname(string name);
	void set_team_icc_ranking(int iccranking);
	void set_numberofplayer(int no_of_players);
	void set_totalmatchesWon(int total_won);
	void set_total_matcheslost(int total_lost);
	void set_teamcaptain(string team_captain);
	void set_teamcoach(string team_coach);
	void set_admin_username(string username);
	void set_admin_password(string password);

	string get_team_name();
	int get_team_icc_ranking();
	int  get_no_of_players();
	int get_totalmatches_won();
	int get_totalmatchesa_lost();
	string get_teamcaptain();
	string get_team_coach();
	string get_username();
	string get_password();
	void add_player();
	void remove_player(Player P[], int size);
	void search_player(Player P[], int size);
	void update_player(Player P[], int size);
	void update_coach(Team *T);
	void Update_captain(Team* T);
	void display_team(Player* P);
	void Add_team(Team* T);
	int access_data(Team* T);
};
class Match:public Team
{
protected:
	string team1;
	string team2;
	string date;
	string venue;
	string match_type;
	string Tournament_name;//t20,IPL,psl
	string commenttors;
	string umpires;
	string Match_status;
public:
	int  mostruns, mostsixes, mostfours, mostcenturies, highestaverage, beststrikerate, mostwickets;
	void set_runs(int runs);
	void set_fours(int fours);
	void set_sixes(int sixes);
	void set_centuries(int centuries);
	void set_high_average(int high_average);
	void set_best_strike(int best_strike);
	void set_most_wickets(int most_wickets);
	Match();
	//Match(string team1, string team2, string date, string venue, string match_type, string Tournament_name, string umpires, string Match_status);
	string conduct_match(Match *m1);
	string sechdule_match(Match* m1);
	void update_world_rcord( Match m1);
	//void update_team_ranking();
	void set_team(string team1, string team2);

};