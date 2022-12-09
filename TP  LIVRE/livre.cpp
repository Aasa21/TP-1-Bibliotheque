#include "livre.h"


livre::livre(std::string nomAuteur, std::string prenomAuteur, std::string langue, std::string genre,std::string titre)
{
	std::cout << "Entrez le nom de l'Auteur" << std::endl;
	std::cin >> nomAuteur;
	std::cout << "Entrez le prénom de l'Auteur" << std::endl;
	std::cin >> prenomAuteur;
	std::cout << "Entrez le titre du Livre" << std::endl;
	std::cin >> titre;
	std::cout << "Entrez la langue du livre" << std::endl;
	std::cin >> langue;
	std::cout << "Entrez le genre du livre" << std::endl;
	std::cin >> genre;
	updateTitre(titre);
	updatePrenomAuteur(prenomAuteur);
	updateNomAuteur(nomAuteur);
	updateGenre(genre);
	updateLangue(langue);
}

void livre::updateTitre(std::string titre)
{
	_titre = titre;
}

void livre::updatePrenomAuteur(std::string prenomAuteur)
{
	if (checkPrenomAuteur(prenomAuteur) == true)
		_PrenomAuteur = prenomAuteur;
	else
		std::cout << "Le prénom de l'auteur n'est pas valide" << std::endl;
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

std::string livre::prenomAuteur()
{
	return _PrenomAuteur;
}

std::string livre::genre()
{
	return _genre;
}

int livre::ISBN()
{
	return _ISBN;
}

std::string livre::langue()
{
	return _langue;
}


bool livre::checkPrenomAuteur(std::string PrenomAuteur)
{
	std::locale loc;
	for (std::string::iterator i=PrenomAuteur.begin(); i!=PrenomAuteur.end();i++)
	{
		if (std::isalpha(*i, loc))
			return true;
		else
			return false;
	}
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


