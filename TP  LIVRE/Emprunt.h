#pragma once
#include <iostream>
#include <string>
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"


class Emprunt
{
public:
	
	Emprunt(Livre& livre, Lecteur& lecteur, Date& date);
	
	//Création des fonction date de fin et début d'emprunt
	std::string dateEmpruntDebut(Date date);
	std::string dateEmpruntFin(Date date);
	
	//Initialisation des variables
	int jourFin;
	int moisFin;
	int anneeFin;
	
	
private:
	//Initialisation des variables objets
	Livre _livre;
	Lecteur _lecteur;
	Date _date;
};

