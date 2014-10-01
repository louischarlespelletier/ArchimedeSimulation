//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : SousMarin.h
///	Description: Classe repr�sentant le sous-marin
///	Cr�� le	   : 30/09/14
///	Modifi� le : 1/10/14
///	Modifi� par: G.Arruda
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