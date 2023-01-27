#include "Date.h"

Date::Date(int mois, int jour, int annee) : Mois(mois), Jour(jour), Annee(annee)
{
	bool status = isDate(mois, jour, annee);
	assert(status && "La date n'est pas valide");
	updateJour(jour);
	updateMois(mois);
	updateAnnee(annee);
}

int Date::mois()
{
	return _mois;
}

int Date::jour()
{
	return _jour;
}

int Date::annee()
{
	return _annee;
}

void Date::updateMois(int mois)
{
	bool status = isDate(mois, _jour,_annee);
	assert(status && "Le mois n'est pas valide");
	_mois = mois;
}

void Date::updateJour(int jour)
{
	bool status = isDate(_mois, jour,_annee);
	assert(status && "Le jour n'est pas valide");
	_jour = jour;
}

void Date::updateAnnee(int annee)
{
	bool status = isDate(_mois, _jour, annee);
	assert(status && "L'année n'est pas valide");
	_annee = annee;
}

bool Date::isDate(int mois, int jour, int annee)
{
	// faudrait avec avec la date depuis le premier janvier 1970 
	
	if (jour <= 0 || jour > 31)
		return false;
	if (mois <= 0 || mois > 12)
		return false;
	if (mois = 2 && jour > 28)
		return false;
	if (mois == 2 || mois == 4 || mois == 6 || mois == 9 || mois == 11 && jour > 31)
		return false;
	if (annee < 0 || annee >2023) 
		return false;
	return true;
}

std::string toString(Date date)
{
	return std::to_string(date.Jour)+"/"+std::to_string(date.Mois) + "/" + std::to_string(date.Annee);
}
