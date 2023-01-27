#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include <vector>
#include <ctime>
#include <random>
#include "Auteur.h"

class Livre
{
public:
	//Surcharge
	friend std::ostream& operator<<(std::ostream& os, const Livre& livre);
	
	Livre(Auteur auteur=Auteur(), std::string titre = "", std::string langue = "", std::string genre = "", int ISBN = 1);

	//Création des fonctions getter et setter
	void updateTitre(std::string titre);
	void updateNomAuteur(Auteur auteur);
	void updateGenre(std::string genre);
	void updateLangue(std::string langue);
	void updateISBN(int ISBN);
	std::string titre();
	std::string nomAuteur();
	std::string Genre();
	//Création des variables
	int ISBN();
	std::string Langue();

	//Vérification que les variables contiennent des lettres
	bool checkNomAuteur(Auteur auteur);
	bool checkLangue(std::string langue);
	bool checkGenre(std::string genre);
	
	//Création de la fonction pour vérifier si le livre est disponible
	void updateDisponible();
	bool disponible = true;

private:

	//Création des variables privées
	Auteur _auteur;
	std::string _titre;
	std::string _NomAuteur;
	std::string _genre;
	std::string _langue;
	int _ISBN;
	bool _disponible = true;
};

