//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : NoeudSimple.h
///	Description: Classe abstraite représentant les feuilles de l'arbre de rendu
///	Créé le	   : 30/09/14
///	Modifié le : 30/09/14
///	Modifié par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef NOEUD_SIMPLE_H
#define NOEUD_SIMPLE_H

#include "Utilitaire\Vecteur3.h"
#include "Visiteurs\VisiteurAbstrait.h"
#include <string>

class NoeudSimple
{
public:
	//Constructeur
	NoeudSimple();
	NoeudSimple(const NoeudSimple& noeud);
	NoeudSimple(const std::string type);

	//Destructeur
	virtual ~NoeudSimple();

	//Affichage
	virtual void afficher() = 0;
	
	//Visiteur
	virtual void accepterVisiteur(VisiteurAbstrait& v);

	//Methode d'acces
	inline const Vecteur3<double>& getPosition() const { return _position; };
	inline const Vecteur3<double>& getRotation() const { return _rotation; };
	inline const Vecteur3<double>& getEchelle() const { return _echelle; };
	inline const Vecteur3<double>& getVitesse() const { return _vitesse; };
	inline const Vecteur3<double>& getVitesseRotation() const { return _vitesseRotation; };
	inline const double  getMasse() const { return _masse; };
	inline NoeudSimple* getParent() const { return _parent; };
	inline const std::string& getType() const { return _type; };

	//Methode d'assignation
	inline void setPosition(Vecteur3<double>& position) { _position = position; };
	inline void setRotation(Vecteur3<double>& rotation) { _rotation = rotation; };
	inline void setEchelle(Vecteur3<double>& echelle) { _echelle = echelle; };
	inline void setVitesse(Vecteur3<double>& vitesse) { _vitesse = vitesse; };
	inline void setVitesseRotation(Vecteur3<double>& vitesseRotation) { _vitesseRotation = vitesseRotation; };
	inline void setMasse(double& masse) { _masse = masse; };
	inline void setParent(NoeudSimple* parent){ _parent = parent; };
	inline void setType(std::string& type) { _type = type; };

	//Interface noeud
	virtual bool ajouterEnfant(NoeudSimple* enfant);
	virtual bool retirerEnfant(NoeudSimple* enfant);
	virtual int obtenirNombreDenfant() const;
	virtual void vider();	//Retire tous les enfants


private:
	Vecteur3<double> _position;
	Vecteur3<double> _rotation;
	Vecteur3<double> _echelle;
	Vecteur3<double> _vitesse;
	Vecteur3<double> _vitesseRotation;
	double _masse;
	NoeudSimple* _parent;
	std::string _type;
};

#endif //NOEUD_SIMPLE_H
