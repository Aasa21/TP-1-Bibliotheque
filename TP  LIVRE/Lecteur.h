#pragma once
#include <string>
#include <vector>
#include <iostream>




class Lecteur
{
public:
	
	friend std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur);
	
	Lecteur(std::string nom="", std::string prenom="");
	std::string ID();
	std::string Nom();
	std::string Prenom();
	bool checkNom(std::string nom);
	bool checkPrenom(std::string prenom);
	void updateNom(std::string nom);
	void updatePrenom(std::string prenom);


private:
	std::string _prenom;
	std::string _nom;
	std::string _ID;


};

