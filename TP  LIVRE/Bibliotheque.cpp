#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(Livre &livre)
{
	//Quand on  crée un objet de type bibliothèque, on ajoute un livre à la bibliothèque
	ajouterLivre(livre);

}

void Bibliotheque::ajouterLivre(Livre& livre)
{
	//on ajoute à la dernière case du vecteur l'objet livre
	_listeLivre.push_back(livre);
}



