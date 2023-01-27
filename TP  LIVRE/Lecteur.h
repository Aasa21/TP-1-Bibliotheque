#pragma once
#include <string>
#include <vector>
#include <iostream>




class Lecteur
{
public:
	//surcharge des opérateurs
	friend std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur);
	
	//création des fonctions et méthodes dont on a besoin
	Lecteur(std::string nom="", std::string prenom="");
	std::string ID();
	std::string Nom();
	std::string Prenom();
	void updateNom(std::string nom);
	void updatePrenom(std::string prenom);
	
	// Vérification que le nom et le prénom ne contiennent que des lettres
	bool checkNom(std::string nom);
	bool checkPrenom(std::string prenom);



private:
	//création des variables
	std::string _prenom;
	std::string _nom;
	std::string _ID;


};

