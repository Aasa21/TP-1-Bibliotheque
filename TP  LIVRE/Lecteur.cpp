#include "Lecteur.h"



Lecteur::Lecteur()
{
	livre livre2;
	std::cout << "Entrez votre nom" << std::endl;
	std::cin >> nom;
	std::cout << "Entrez votre prenom" << std::endl;
	std::cin >> prenom;
	updateNom(nom);
	updatePrenom(prenom);
	std::cout << "Votre nom d'utilisateur est " << ID() << std::endl;
	_liste.push_back(livre2.ISBN());

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
	std::locale loc;
	for (std::string::iterator i = nom.begin(); i != nom.end(); i++)
	{
		if (std::isalpha(*i, loc))
			return true;
		else
			return false;
	}
}

bool Lecteur::checkPrenom(std::string prenom)
{
	std::locale loc;
	for (std::string::iterator i = prenom.begin(); i != prenom.end(); i++)
	{
		if (std::isalpha(*i, loc))
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
