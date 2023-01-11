#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Lecteur.h"
#include "Bibliotheque.h"
#include "livre.h"
#include "Date.h"



class Emprunt
{
public:
	Emprunt(std::string ID ="", std::string livre="", std::string auteu="", int jour=1, int mois=1, int annee=1);
	std::string dateEmpruntDebut(int jour,int mois,int annee);
	std::string dateEmpruntFin(int jour, int mois, int annee);
	
	
private:
	std::vector <bool> _emprunts;
};

