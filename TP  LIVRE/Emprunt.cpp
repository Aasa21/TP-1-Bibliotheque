#include "Emprunt.h"
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"


Emprunt::Emprunt(Livre& livre, Lecteur& lecteur, Date& date)
{
	//Initialisation des variables fin mois/année pour les utilisé après
	dateEmpruntFin(date);
	
	//Vérification que le livre est disponible
	if (livre.disponible == true)
	{
		_livre = livre;
		_lecteur = lecteur;
		_date = date;
		std::cout << "La date de début d'emprunt est " << dateEmpruntDebut(date) << std::endl;
		std::cout << "La date de fin d'emprunt est " << dateEmpruntFin(date) << std::endl;
		
	}
	else if (jourFin == date.Jour && moisFin == date.Mois && anneeFin == date.Annee && livre.disponible == false)
	{
		_livre = livre;
		_lecteur = lecteur;
		_date = date;
		std::cout << "La date de début d'emprunt est " << dateEmpruntDebut(date) << std::endl;
		std::cout << "La date de fin d'emprunt est " << dateEmpruntFin(date) << std::endl;
	}
	//Si il n'est pas disponible on ne met pas a jour les variables objets
	else
	{
		std::cout << "Le livre n'est pas disponible" << std::endl;
	}
}

std::string Emprunt::dateEmpruntDebut(Date date)
{
	//Initialisation de la date
	Livre livre;
	date.Date::Date(date.Mois, date.Jour, date.Annee);
	livre.disponible = false;
	return toString((date.Mois, date.Jour, date.Annee));
}

std::string Emprunt::dateEmpruntFin(Date date)
{	
	//Ajout de 2 semaines à la date de début d'emprunt pour finir l'emprunt
	jourFin = date.Jour + 14;
	if (date.isDate(date.Mois, date.Jour, date.Annee) == false)
	{
		jourFin = date.Jour - 30;
		moisFin = date.Mois + 1;
		if (date.isDate(date.Mois, date.Jour, date.Annee) == false)
		{
			moisFin = date.Mois - 12;
			anneeFin = date.Annee + 1;
		}
		return toString((moisFin, jourFin, anneeFin));
	}
	else return toString((date.Mois, jourFin, date.Annee));
}
