#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include <vector>
#include <ctime>
#include <random>

class livre
{
public:
	livre(std::string nomAuteur = "",std::string titre="");
	void updateTitre(std::string titre);
	void updateNomAuteur(std::string nomAuteur);
	void updateGenre(std::string genre);
	void updateLangue(std::string langue);
	std::string titre();
	std::string nomAuteur();
	std::string Genre();
	int ISBN();
	std::string Langue();
	bool checkNomAuteur(std::string NomAuteur);
	bool checkLangue(std::string langue);
	bool checkGenre(std::string genre);
	bool LivreDisponible(bool livreDisponible);

private:
	std::string langue;
	std::string genre;
	std::string _titre;
	std::string _NomAuteur;
	std::string _genre;
	std::string _langue;
	int _ISBN;
};

