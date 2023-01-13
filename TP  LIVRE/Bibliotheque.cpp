#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(Livre &livre, Lecteur &lecteur, Date &date)
{
	Emprunt emprunt(livre, lecteur, date);
	_listeLivre.push_back(livre);

}



