#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include <vector>
#include <ctime>
#include <random>

class Livre
{
public:
	Livre(std::string nomAuteur = "",std::string titre="", std::string langue="", std::string genre="", int ISBN=1);
	void updateTitre(std::string titre);
	void updateNomAuteur(std::string nomAuteur);
	void updateGenre(std::string genre);
	void updateLangue(std::string langue);
	void updateISBN(int ISBN);
	std::string titre();
	std::string nomAuteur();
	std::string Genre();
	int ISBN();
	std::string Langue();
	//bool checkNomAuteur(std::string NomAuteur);
	//bool checkLangue(std::string langue);
	//bool checkGenre(std::string genre);
	void updateDisponible();
	bool disponible = true;

private:
	std::string _langue;
	std::string _genre;
	std::string _titre;
	std::string _NomAuteur;
	std::string _genre;
	std::string _langue;
	int _ISBN;
	bool _disponible = true;
};

