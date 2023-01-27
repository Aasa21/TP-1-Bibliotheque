#pragma once
#include <string>
#include <vector>
#include <iostream>




class Lecteur
{
public:
	//surcharge des op�rateurs
	friend std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur);
	
	//cr�ation des fonctions et m�thodes dont on a besoin
	Lecteur(std::string nom="", std::string prenom="");
	std::string ID();
	std::string Nom();
	std::string Prenom();
	void updateNom(std::string nom);
	void updatePrenom(std::string prenom);
	
	// V�rification que le nom et le pr�nom ne contiennent que des lettres
	bool checkNom(std::string nom);
	bool checkPrenom(std::string prenom);



private:
	//cr�ation des variables
	std::string _prenom;
	std::string _nom;
	std::string _ID;


};

