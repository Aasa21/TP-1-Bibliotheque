#pragma once
#include <iostream>
#include <string>
#include <cassert>

class Date
{
public :
	Date(int mois = 1, int jour = 1, int annee = 1);
	//Création des fonctions et méthodes getter et setter
	int mois();
	int jour();
	int annee();
	void updateMois(int mois);
	void updateJour(int jour);
	void updateAnnee(int annee);
	bool isDate(int mois, int jour, int annee);
	//Création des variables
	int Jour;
	int Mois;
	int Annee;
	
private :
	//Création des variables privées
	int _jour;
	int _mois;
	int _annee;
};
std::string toString(Date date);

