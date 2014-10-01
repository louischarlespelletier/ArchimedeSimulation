//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : ArbreDeRendu.h
///	Description: Classe repr�sentant l'arbre de rendu de l'application
///	Cr�� le	   : 1/10/14
///	Modifi� le : 1/10/14
///	Modifi� par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef ARBRE_DE_RENDU_H
#define ARBRE_DE_RENDU_H

#include "NoeudComposite.h"
class ArbreDeRendu : public NoeudComposite
{
public:
	//Constructeur
	ArbreDeRendu();

	//Destructeur
	virtual ~ArbreDeRendu();
	
	//Affichage
	virtual void afficher();

	//Visiteur
	virtual void accepterVisiteur(VisiteurAbstrait& v);
private:
};

#endif //ARBRE_DE_RENDU_H