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
	
	//Création d'une fonction pour ajouter un objet livre à la bibliothèque
	void ajouterLivre(Livre& livre);
	
	
private:
	//Création du vecteur qui va contenir tous les livres de la bibliothèque
	std::vector<Livre> _listeLivre;
	
};

