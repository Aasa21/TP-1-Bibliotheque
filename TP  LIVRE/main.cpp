#include "Date.h"
#include "livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"
#include <iostream>

int main()
{
	std::vector<Lecteur> listeLecteur;
	//Création des dates 
	Date d1(1, 1, 2020);
	Date d2(1, 1, 2021);

	//Création des Livres
	Livre l1("Harry Potter", "Jean Papa","Français", "Fantastique", 1);
	Livre l2("Paela", "Jean Papa", "Français", "Fantastique", 2);
	Livre l3("Tourte", "Bibi Arnaud", "Français", "Fantastique", 3);
	Livre l4("Entrecote", "Bibi Arnaud", "Français", "Fantastique", 4);
	Livre l5("Michigan", "René Jacque", "Français", "Fantastique", 5);
	Livre l6("Lost Vegas", "René Jacque", "Français", "Fantastique", 6);
	Livre l7("Gnagna", "Shaki Ra", "Français", "Fantastique", 7);
	Livre l8("Gnogno", "Shaki Ra", "Français", "Fantastique", 8);
	Livre l9("Tratra", "Rom Ansse", "Français", "Fantastique", 9);
	Livre l10("Troutrou", "Rom Ansse", "Français", "Fantastique", 10);

	/*for (int i = 0; i < 10; i++)
	{
		Bibliotheque();
	}*/
	
	//Création des Lecteurs
	Lecteur le1("Binet", "Arnaud");
	listeLecteur.push_back(le1);
	Lecteur le2("Donz", "Max");
	listeLecteur.push_back(le2);
	Lecteur le3("Jacques", "René");
	listeLecteur.push_back(le3);
	

	//Surcharge des opérateurs de Lecteur
	
	for (int i = 0; i < listeLecteur.size(); i++)
	{
		std::cout << listeLecteur[i] << std::endl;
	}
	
	//Surcharge des opérateurs de Auteur
	

	
	
	//// Surcharge des opérateurs de Livre
	//Livre livre;
	//std::cout << livre << std::endl;

	//Création des emprunts
	Emprunt e1(l1, le1, d1);
	Emprunt e4(l4, le1, d2);
	Emprunt e7(l7, le1, d1);
	
	Emprunt e2(l2, le2, d2);
	Emprunt e5(l5, le2, d1);
	Emprunt e8(l8, le2, d2);
	
	Emprunt e3(l3, le3, d1);
	Emprunt e6(l6, le3, d2);
	Emprunt e9(l9, le3, d1);
}