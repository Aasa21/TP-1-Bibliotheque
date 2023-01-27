#include "Date.h"
#include "livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"
#include <iostream>
#include "Auteur.h"

int main()
{
	std::vector<Lecteur> listeLecteur;
	
	//Cr�ation des dates 
	Date d1(1, 1, 2020);
	Date d2(1, 1, 2021);
	
	//Cr�ation des Auteurs
	Auteur a1("Auteur1","1/1/1",1);
	Auteur a2("Auteur2","2/2/2",2);
	Auteur a3("Auteur3","3/3/3",3);
	Auteur a4("Auteur4","4/4/4",4);
	Auteur a5("Auteur5","5/5/5",5);

	//Cr�ation des Livres
	Livre l1( a1, "Harry Potter", "Fran�ais", "Fantastique", 1);
	Livre l2(a1, "Paela", "Fran�ais", "Fantastique", 2);
	Livre l3(a2, "Tourte", "Fran�ais", "Fantastique", 3);
	Livre l4(a2, "Entrecote", "Fran�ais", "Fantastique", 4);
	Livre l5(a3, "Michigan", "Fran�ais", "Fantastique", 5);
	Livre l6(a3, "Lost Vegas", "Fran�ais", "Fantastique", 6);
	Livre l7(a4, "Gnagna", "Fran�ais", "Fantastique", 7);
	Livre l8(a4, "Gnogno", "Fran�ais", "Fantastique", 8);
	Livre l9(a5, "Tratra", "Fran�ais", "Fantastique", 9);
	Livre l10(a5, "Troutrou", "Fran�ais", "Fantastique", 10);

	//Cr�ation de la Biblioth�que
	Bibliotheque b1(l1);
	Bibliotheque b2(l2);
	Bibliotheque b3(l3);
	Bibliotheque b4(l4);
	Bibliotheque b5(l5);
	Bibliotheque b6(l6);
	Bibliotheque b7(l7);
	Bibliotheque b8(l8);
	Bibliotheque b9(l9);
	Bibliotheque b10(l10);
	
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
	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl;
	std::cout << a4 << std::endl;
	std::cout << a5 << std::endl;
	
	// Surcharge des op�rateurs de Livre
	std::cout << l1 << std::endl;
	std::cout << l2 << std::endl;
	std::cout << l3 << std::endl;
	std::cout << l4 << std::endl;
	std::cout << l5 << std::endl;
	std::cout << l6 << std::endl;
	std::cout << l7 << std::endl;
	std::cout << l8 << std::endl;
	std::cout << l9 << std::endl;
	std::cout << l10 << std::endl;


	//Cr�ation des emprunts
	// Je ne compred pas pourquoi quand je d�clare les emprunts, il me dit que je suis out of range dans le xstring
//	Emprunt e1(l1, le1, d1);
//	Emprunt e4(l4, le1, d2);
//	Emprunt e7(l7, le1, d1);
//	
//	Emprunt e2(l2, le2, d2);
//	Emprunt e5(l5, le2, d1);
//	Emprunt e8(l8, le2, d2);
//	
//	Emprunt e3(l3, le3, d1);
//	Emprunt e6(l6, le3, d2);
//	Emprunt e9(l9, le3, d1);
}