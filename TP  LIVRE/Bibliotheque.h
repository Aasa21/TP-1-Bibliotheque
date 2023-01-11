#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Emprunt.h"
#include "Date.h"
#include "Lecteur.h"
#include "Livre.h"


class Bibliotheque
{
public:
	
	Bibliotheque(std::string auteur = "", std::string livre="", int jour=1, int mois=1, int annee=1);
	
	
private:
	
	std::vector <livre> _listeLivre;
};

