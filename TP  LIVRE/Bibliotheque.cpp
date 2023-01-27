#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(Livre &livre)
{
	ajouterLivre(livre);

}

void Bibliotheque::ajouterLivre(Livre& livre)
{
	_listeLivre.push_back(livre);
}



