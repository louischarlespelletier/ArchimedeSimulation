//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : NoeudComposite.h
///	Description: Classe abstraite repr�sentant une branche de l'arbre de rendu
///	Cr�� le	   : 30/09/14
///	Modifi� le : 30/09/14
///	Modifi� par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef NOEUD_COMPOSITE_H
#define NOEUD_COMPOSITE_H

#include "NoeudSimple.h"
#include <list>

class NoeudComposite : public NoeudSimple
{
public:
	//Constructeur
	NoeudComposite();

	//Destructeur
	virtual ~NoeudComposite();

	//Affichage
	virtual void afficher();

	//Interface noeud
	virtual bool ajouterEnfant(NoeudSimple* enfant);
	virtual bool retirerEnfant(NoeudSimple* enfant);
	virtual int obtenirNombreDenfant() const;
	virtual void vider();	//Retire tous les enfants

private:
	std::list<NoeudSimple*> _enfants;
};

#endif //NOEUD_COMPOSITE_H