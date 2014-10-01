//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : Environnement.h
///	Description: Classe représentant l'environnement de plonge du sous-marin
///	Créé le	   : 1/10/14
///	Modifié le : 1/10/14
///	Modifié par: G.Arruda
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