#include "Livre.h"


Livre::Livre(std::string nomAuteur,std::string titre,std::string langue,std::string genre,int ISBN)
{
	updateTitre(titre);
	updateNomAuteur(nomAuteur);
	updateGenre(genre);
	updateLangue(langue);
	updateISBN(ISBN);
}

void Livre::updateTitre(std::string titre)
{
	_titre = titre;
}


void Livre::updateNomAuteur(std::string nomAuteur)
{
	// (checkNomAuteur(nomAuteur) == true)
		_NomAuteur = nomAuteur;
	//else
		//std::cout << "Le nom de l'auteur n'est pas valide" << std::endl;

}

void Livre::updateGenre(std::string genre)
{
	//if (checkGenre(genre) == true)
		_genre = genre;
	//else
		//std::cout << "Le genre n'est pas valide" << std::endl;

}

void Livre::updateLangue(std::string langue)
{
	//if (checkLangue(langue) == true)
		_langue = langue;
	//else
		//std::cout << "La langue n'est pas valide" << std::endl;
}

void Livre::updateISBN(int ISBN)
{
	_ISBN = ISBN;
}

std::string Livre::titre()
{
	return _titre ;
}

std::string Livre::nomAuteur()
{
	return _NomAuteur;
}


std::string Livre::Genre()
{
	return _genre;
}

int Livre::ISBN()
{
	return _ISBN;
}

std::string Livre::Langue()
{
	return _langue;
}

//bool Livre::checkNomAuteur(std::string NomAuteur)
//{
//	std::locale loc;
//	for (std::string::iterator i = NomAuteur.begin(); i != NomAuteur.end(); i++)
//	{
//		if (std::isalpha(*i, loc))
//			return true;
//		else
//			return false;
//	}
//}
//
//bool Livre::checkLangue(std::string langue)
//{
//	std::locale loc;
//	for (std::string::iterator i = langue.begin(); i != langue.end(); i++)
//	{
//		if (std::isalpha(*i, loc))
//			return true;
//		else
//			return false;
//	}
//}
//
//bool Livre::checkGenre(std::string genre)
//{
//	std::locale loc;
//	for (std::string::iterator i = genre.begin(); i != genre.end(); i++)
//	{
//		if (std::isalpha(*i, loc))
//			return true;
//		else
//			return false;
//	}
//}

void Livre::updateDisponible()
{
	_disponible = disponible;
}



