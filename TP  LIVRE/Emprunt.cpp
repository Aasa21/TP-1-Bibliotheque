#include "Emprunt.h"

Lecteur lecteur1;



Emprunt::Emprunt(std::string ID, std::string Livre, std::string auteur, int jour, int mois, int annee)
{
	Date date1;
	livre livre1;
	Lecteur lecteur1;
	livre1.livre::livre(auteur, Livre);
	livre1.LivreDisponible(false);
	date1.Date::Date(mois, jour, annee);
	dateEmpruntDebut(jour, mois, annee);
	std::cout << "Entrez le nom du lecteur" << std::endl;
	dateEmpruntFin(jour, mois, annee);

	
}

std::string Emprunt::dateEmpruntDebut(int jour,int mois,int annee)
{
	Date date1;
	
	date1.Date::Date(mois, jour, annee);
	return date1.toString((mois, jour, annee));
}

std::string Emprunt::dateEmpruntFin(int jour, int mois, int annee)
{
	Date date1;
	
	jour = jour + 14;
	if (date1.isDate(mois, jour, annee) == false)
	{
		jour = jour - 30;
		mois = mois + 1;
		if (date1.isDate(mois, jour, annee) == false)
		{
			mois = mois - 12;
			annee = annee + 1;
		}
		return date1.toString((mois, jour, annee));
	}
	else return date1.toString((mois, jour, annee));
}
