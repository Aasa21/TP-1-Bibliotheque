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
	livre(std::string nomAuteur = "", std::string prenomAuteur="", std::string langue="", std::string genre="",std::string titre="");
	void updateTitre(std::string titre);
	void updatePrenomAuteur(std::string prenomAuteur);
	void updateNomAuteur(std::string nomAuteur);
	void updateGenre(std::string genre);
	void updateLangue(std::string langue);
	std::string titre();
	std::string nomAuteur();
	std::string prenomAuteur();
	std::string genre();
	int ISBN();
	std::string langue();
	bool checkPrenomAuteur(std::string PrenomAuteur);
	bool checkNomAuteur(std::string NomAuteur);
	bool checkLangue(std::string langue);
	bool checkGenre(std::string genre);


private:
	std::string _titre;
	std::string _NomAuteur;
	std::string _PrenomAuteur;
	std::string _genre;
	std::string _langue;
	int _ISBN;
};

