#include "Bibliotheque.h"

Bibliotheque::Bibliotheque(Livre &livre)
{
	//Quand on  cr�e un objet de type biblioth�que, on ajoute un livre � la biblioth�que
	ajouterLivre(livre);

}

void Bibliotheque::ajouterLivre(Livre& livre)
{
	//on ajoute � la derni�re case du vecteur l'objet livre
	_listeLivre.push_back(livre);
}



