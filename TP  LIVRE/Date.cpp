#include "Date.h"

Date::Date(int mois, int jour, int annee) : _mois(mois), _jour(jour), _annee(annee)
{
	bool status = isDate(mois, jour, annee);
	assert(status && "La date n'est pas valide");
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
	//chaud de faire aussi avec le jour et mois et annee actuelle
	if (jour <= 0 || jour > 31)
		return false;
	if (mois <= 0 || mois > 12)
		return false;
	if (mois = 2 && jour > 28)
		return false;
	if (mois == 2 || mois == 4 || mois == 6 || mois == 9 || mois == 11 && jour > 31)
		return false;
	if (annee < 0 || annee >2023) //chaud de faire du regex mais pas compris comment faire
		return false;
	return true;
}
