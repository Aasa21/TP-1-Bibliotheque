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
	
	//Cr�ation d'une fonction pour ajouter un objet livre � la biblioth�que
	void ajouterLivre(Livre& livre);
	
	
private:
	//Cr�ation du vecteur qui va contenir tous les livres de la biblioth�que
	std::vector<Livre> _listeLivre;
	
};

