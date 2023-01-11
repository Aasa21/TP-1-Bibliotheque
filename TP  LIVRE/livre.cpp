#include "livre.h"


livre::livre(std::string nomAuteur,std::string titre)
{
	std::cout << "Entrez la langue du livre" << std::endl;
	std::cin >> langue;
	std::cout << "Entrez le genre du livre" << std::endl;
	std::cin >> genre;
	updateTitre(titre);
	updateNomAuteur(nomAuteur);
	updateGenre(genre);
	updateLangue(langue);
}

void livre::updateTitre(std::string titre)
{
	_titre = titre;
}


void livre::updateNomAuteur(std::string nomAuteur)
{
	if (checkNomAuteur(nomAuteur) == true)
		_NomAuteur = nomAuteur;
	else
		std::cout << "Le nom de l'auteur n'est pas valide" << std::endl;

}

void livre::updateGenre(std::string genre)
{
	if (checkGenre(genre) == true)
		_genre = genre;
	else
		std::cout << "Le genre n'est pas valide" << std::endl;

}

void livre::updateLangue(std::string langue)
{
	if (checkLangue(langue) == true)
		_langue = langue;
	else
		std::cout << "La langue n'est pas valide" << std::endl;
}

std::string livre::titre()
{
	return _titre ;
}

std::string livre::nomAuteur()
{
	return _NomAuteur;
}


std::string livre::Genre()
{
	return _genre;
}

int livre::ISBN()
{
	return _ISBN;
}

std::string livre::Langue()
{
	return _langue;
}



bool livre::checkNomAuteur(std::string NomAuteur)
{
	std::locale loc;
	for (std::string::iterator i = NomAuteur.begin(); i != NomAuteur.end(); i++)
	{
		if (std::isalpha(*i, loc))
			return true;
		else
			return false;
	}
}

bool livre::checkLangue(std::string langue)
{
	std::locale loc;
	for (std::string::iterator i = langue.begin(); i != langue.end(); i++)
	{
		if (std::isalpha(*i, loc))
			return true;
		else
			return false;
	}
}

bool livre::checkGenre(std::string genre)
{
	std::locale loc;
	for (std::string::iterator i = genre.begin(); i != genre.end(); i++)
	{
		if (std::isalpha(*i, loc))
			return true;
		else
			return false;
	}
}

bool livre::LivreDisponible(bool livreDisponible)
{
	return livreDisponible;
}


