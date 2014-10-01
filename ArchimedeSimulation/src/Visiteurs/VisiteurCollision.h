//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : VisiteurCollision.h
///	Description: Classe g�rant les collisions dans l'arbre de rendu
///	Cr�� le	   : 1/10/14
///	Modifi� le : 1/10/14
///	Modifi� par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef VISITEUR_COLLISION_H
#define VISITEUR_COLLISION_H

#include "VisiteurAbstrait.h"

class VisiteurCollision : public VisiteurAbstrait
{
public:
	//Constructeur
	VisiteurCollision();

	//Destructeur
	~VisiteurCollision();

	//Traitement de noeud
	virtual void traiterArbreDeRendu(ArbreDeRendu& noeud) = 0;
	virtual void traiterSousMarin(SousMarin& noeud) = 0;
	virtual void traiterEnvironnement(Environnement& noeud) = 0;
private:
};

#endif //VISITEUR_COLLISION_H