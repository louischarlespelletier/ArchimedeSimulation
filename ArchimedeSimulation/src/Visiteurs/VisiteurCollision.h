//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : VisiteurCollision.h
///	Description: Classe gérant les collisions dans l'arbre de rendu
///	Créé le	   : 1/10/14
///	Modifié le : 1/10/14
///	Modifié par: G.Arruda
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