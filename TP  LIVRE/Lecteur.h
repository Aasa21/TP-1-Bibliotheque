#pragma once
#include <string>
#include <vector>
#include "livre.h"


class Lecteur
{
public:
	Lecteur(std::string nom="", std::string prenom="");
	std::string ID();
	std::string nom();
	std::string prenom();
	bool checkNom(std::string nom);
	bool checkPrenom(std::string prenom);
	void updateNom(std::string nom);
	void updatePrenom(std::string prenom);


private:
	std::vector<int> _liste;
	std::string _prenom;
	std::string _nom;
	std::string _ID;

};

