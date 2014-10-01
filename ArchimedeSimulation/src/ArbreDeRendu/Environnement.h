//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : Environnement.h
///	Description: Classe repr�sentant l'environnement de plonge du sous-marin
///	Cr�� le	   : 1/10/14
///	Modifi� le : 1/10/14
///	Modifi� par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef ENVIRONNEMENT_H
#define ENVIRONNEMENT_H

#include "NoeudComposite.h"

class Environnement : public NoeudComposite
{
public:
	//Constructeur
	Environnement();

	//Destructeur
	~Environnement();

	//Affichage
	virtual void afficher();

	//Visiteur
	virtual void accepterVisiteur(VisiteurAbstrait& v);
private:

};

#endif //ENVIRONNEMENT_H