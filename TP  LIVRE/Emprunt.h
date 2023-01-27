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
	std::string dateEmpruntDebut(Date date);
	std::string dateEmpruntFin(Date date);
	int jourFin;
	int moisFin;
	int anneeFin;
	
	
private:
	Livre _livre;
	Lecteur _lecteur;
	Date _date;
};

