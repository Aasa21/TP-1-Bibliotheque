#pragma once
#include <iostream>
#include <string>

class Auteur
{
public:
	//Surchage
	friend std::ostream& operator<<(std::ostream& os, const Auteur& auteur);

	Auteur(std::string nomAuteur = "", std::string DateNaissance = "", int IdNum = 1);
	void updateNomAuteur(std::string nomAuteur);
	void updateDateNaissance(std::string DateNaissance);
	void updateIdNum(int IdNum);
	std::string nomAuteur();
	std::string DateNaissance();
	int idNum();
	std::string NomAuteur;
	std::string dateNaissance;
	int IdNum;

private:
	std::string _nomAuteur;
	std::string _dateNaissance;
	int _IdNum;

};

