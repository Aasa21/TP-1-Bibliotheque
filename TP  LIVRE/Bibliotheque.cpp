#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(std::string auteur, std::string Livre,int jour, int mois , int annee)
{
	Lecteur lecteur2;
	livre livre3;
	Date date1;
	
	lecteur2.Lecteur::Lecteur();//permet d'avoir ID par la suite
	std::cout << "Entrez le titre du livre emprunté" << std::endl;
	std::cin >> Livre;
	std::cout << "Entrez le nom de l'Auteur du livre emprunté" << std::endl;
	std::cin >> auteur;
	std::cout << "Entrez la date d'emprunt du livre (Jour puis Mois puis Année)" << std::endl;
	std::cin >> jour;
	std::cin >> mois;
	std::cin >> annee;
	date1.Date::Date(mois, jour, annee);
	

	//_listeLivre.push_back( il faut push back le livre que je crée mais deja faut savoir le crée );

}


