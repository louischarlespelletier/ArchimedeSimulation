//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : SousMarin.h
///	Description: Classe représentant le sous-marin
///	Créé le	   : 30/09/14
///	Modifié le : 1/10/14
///	Modifié par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SOUS_MARIN_H
#define SOUS_MARIN_H

#include "NoeudComposite.h"

class SousMarin : public NoeudComposite
{
public:
	//Constructeur
	SousMarin();
	
	//Destructeur
	~SousMarin();

	//Affichage
	virtual void afficher();

	//Visiteur
	virtual void accepterVisiteur(VisiteurAbstrait& v);

private:
};

#endif //SOUS_MARIN_H