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
	
	Bibliotheque(Livre &livre);
	void ajouterLivre(Livre& livre);
	
	
private:
	std::vector<Livre> _listeLivre;
	
};

