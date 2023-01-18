#include "Emprunt.h"
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"


Emprunt::Emprunt(Livre &livre, Lecteur &lecteur, Date &date)
{
	dateEmpruntFin(date);
	if (livre.disponible == true)
	{
		_livre = livre;
		_lecteur = lecteur;
		_date = date;
		std::cout << "La date de début d'emprunt est " << dateEmpruntDebut(date) << std::endl;
		std::cout << "La date de fin d'emprunt est " << dateEmpruntFin(date) << std::endl;
		
	}
	else if (jourFin == date._jour && moisFin == date._mois && anneeFin == date._annee && livre.disponible == false)
	{
		_livre = livre;
		_lecteur = lecteur;
		_date = date;
		std::cout << "La date de début d'emprunt est " << dateEmpruntDebut(date) << std::endl;
		std::cout << "La date de fin d'emprunt est " << dateEmpruntFin(date) << std::endl;
	}
	else
	{
		std::cout << "Le livre n'est pas disponible" << std::endl;
	}
}

std::string Emprunt::dateEmpruntDebut(Date date)
{
	date.Date::Date(date._mois, date._jour, date._annee);
	return toString((date._mois, date._jour, date._annee));
}

std::string Emprunt::dateEmpruntFin(Date date)
{	
	jourFin = date._jour + 14;
	if (date.isDate(date._mois, date._jour, date._annee) == false)
	{
		jourFin = date._jour - 30;
		moisFin = date._mois + 1;
		if (date.isDate(date._mois, date._jour, date._annee) == false)
		{
			moisFin = date._mois - 12;
			anneeFin = date._annee + 1;
		}
		return toString((moisFin, jourFin, anneeFin));
	}
	else return toString((date._mois, jourFin, date._annee));
}
