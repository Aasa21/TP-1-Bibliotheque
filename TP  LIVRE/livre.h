#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include <vector>

class livre
{
public:
	std::vector<std::string> ListeIdentifiant;
	std::string titre();
	std::string nomAuteur();
	std::string prenomAuteur();
	std::string genre();
	int ISBN();
	std::string langue();

private:

	std::string _titre;
	std::string _NomAuteur;
	std::string _PrenomAuteur;
	std::string _genre;
	std::string _langue;
	int _ISBN;
};

