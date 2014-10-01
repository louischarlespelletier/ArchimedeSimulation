//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : VisiteurAbstrait.h
///	Description: Classe implementant le patron visiteur pour l'arbre de rendu
///	Créé le	   : 1/10/14
///	Modifié le : 1/10/14
///	Modifié par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef VISITEUR_ABSTRAIT_H
#define VISITEUR_ABSTRAIT_H

class ArbreDeRendu;
class Environnement;
class SousMarin;

class VisiteurAbstrait
{
public:
	//Constructeur
	VisiteurAbstrait();
	
	//Destructeur
	virtual ~VisiteurAbstrait();

	//Traitement de noeud
	virtual void traiterArbreDeRendu(ArbreDeRendu& noeud) = 0;
	virtual void traiterSousMarin(SousMarin& noeud) = 0;
	virtual void traiterEnvironnement(Environnement& noeud) = 0;

private:
};

#endif //VISITEUR_ABSTRAIT_H