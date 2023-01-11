#pragma once
#include <iostream>
#include <string>
#include <cassert>
#include <regex>



class Date
{
public :
	Date(int mois = 1, int jour = 1, int annee = 1);
	int mois();
	int jour();
	int annee();
	void updateMois(int mois);
	void updateJour(int jour);
	void updateAnnee(int annee);
	bool isDate(int mois, int jour, int annee);
	

private :
	int _mois;
	int _jour;
	int _annee;
	

	
};

std::string toString(Date d);

