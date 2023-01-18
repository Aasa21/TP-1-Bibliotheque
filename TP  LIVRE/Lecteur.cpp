#include "Lecteur.h"



Lecteur::Lecteur(std::string nom,std::string prenom)
{
	updateNom(nom);
	updatePrenom(prenom);
	std::cout << "Votre nom d'utilisateur est " << ID() << std::endl;
	
}

std::string Lecteur::ID()
{
    _ID = _prenom.at(0);
    _ID += _nom;
    return _ID;
}

std::string Lecteur::Nom()
{
    return _nom;
}

std::string Lecteur::Prenom()
{
    return _prenom;
}

bool Lecteur::checkNom(std::string nom)
{
	//On vérifie que le nom ne contient que des lettres 
	for (std::string::iterator i = nom.begin(); i != nom.end(); i++)
	{
		if (std::isalpha(*i))
			return true;
		else
			return false;
	}
}

bool Lecteur::checkPrenom(std::string prenom)
{
	//On vérifie que le prénom ne contient que des lettres 
	for (std::string::iterator i = prenom.begin(); i != prenom.end(); i++)
	{
		if (std::isalpha(*i))
			return true;
		else
			return false;
	}
}

void Lecteur::updateNom(std::string nom)
{
	_nom = nom;
}

void Lecteur::updatePrenom(std::string prenom)
{
	_prenom = prenom;
}

std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur)
{
	os << "Nom: " << lecteur._nom << std::endl;
	os << "Prenom: " << lecteur._prenom << std::endl;
	os << "ID: " << lecteur._ID << std::endl;
	return os;
}