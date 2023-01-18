#include "Date.h"
#include "livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"
#include <iostream>

int main()
{
	std::vector<Lecteur> listeLecteur;
	//Cr�ation des dates 
	Date d1(1, 1, 2020);
	Date d2(1, 1, 2021);

	//Cr�ation des Livres
	Livre l1("Harry Potter", "Jean Papa","Fran�ais", "Fantastique", 1);
	Livre l2("Paela", "Jean Papa", "Fran�ais", "Fantastique", 2);
	Livre l3("Tourte", "Bibi Arnaud", "Fran�ais", "Fantastique", 3);
	Livre l4("Entrecote", "Bibi Arnaud", "Fran�ais", "Fantastique", 4);
	Livre l5("Michigan", "Ren� Jacque", "Fran�ais", "Fantastique", 5);
	Livre l6("Lost Vegas", "Ren� Jacque", "Fran�ais", "Fantastique", 6);
	Livre l7("Gnagna", "Shaki Ra", "Fran�ais", "Fantastique", 7);
	Livre l8("Gnogno", "Shaki Ra", "Fran�ais", "Fantastique", 8);
	Livre l9("Tratra", "Rom Ansse", "Fran�ais", "Fantastique", 9);
	Livre l10("Troutrou", "Rom Ansse", "Fran�ais", "Fantastique", 10);

	/*for (int i = 0; i < 10; i++)
	{
		Bibliotheque();
	}*/
	
	//Cr�ation des Lecteurs
	Lecteur le1("Binet", "Arnaud");
	listeLecteur.push_back(le1);
	Lecteur le2("Donz", "Max");
	listeLecteur.push_back(le2);
	Lecteur le3("Jacques", "Ren�");
	listeLecteur.push_back(le3);
	

	//Surcharge des op�rateurs de Lecteur
	
	for (int i = 0; i < listeLecteur.size(); i++)
	{
		std::cout << listeLecteur[i] << std::endl;
	}
	
	//Surcharge des op�rateurs de Auteur
	

	
	
	//// Surcharge des op�rateurs de Livre
	//Livre livre;
	//std::cout << livre << std::endl;

	//Cr�ation des emprunts
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