#include "Auteur.h"

Auteur::Auteur(std::string nomAuteur, std::string DateNaissance, int IdNum) :IdNum(IdNum), NomAuteur(nomAuteur), dateNaissance(DateNaissance)
{
	//Quand un auteur est créé on met a jour les variables
	updateDateNaissance(DateNaissance);
	updateIdNum(IdNum);
	updateNomAuteur(nomAuteur);
	
}

void Auteur::updateNomAuteur(std::string nomAuteur)
{
	//Mise a jour du nom de l'auteur
	_nomAuteur = nomAuteur;
}

void Auteur::updateDateNaissance(std::string DateNaissance)
{
	//Mise a jour de la date de naissance
	_dateNaissance = DateNaissance;
}

void Auteur::updateIdNum(int IdNum)
{
	//Mise a jour de l'ID
	_IdNum = IdNum;
}

std::string Auteur::nomAuteur()
{
	return _nomAuteur;
}

std::string Auteur::DateNaissance()
{
	return _dateNaissance;
}

int Auteur::idNum()
{
	return _IdNum;
}

std::ostream& operator<<(std::ostream& os, const Auteur& auteur)
{
	os << "Auteur " << auteur._nomAuteur << std::endl;
	os << "Date de Naissance : " << auteur._dateNaissance << std::endl;
	os << "Id Numerique : " << auteur._IdNum << std::endl;

	return os;
}