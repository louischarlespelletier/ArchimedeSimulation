#include "NoeudSimple.h"


NoeudSimple::NoeudSimple()
{
}

NoeudSimple::NoeudSimple(const NoeudSimple& noeud)
{
}

NoeudSimple::NoeudSimple(const std::string type)
{
}

NoeudSimple::~NoeudSimple()
{
}

bool NoeudSimple::ajouterEnfant(NoeudSimple* enfant)
{
	return false;
}

bool NoeudSimple::retirerEnfant(NoeudSimple* enfant)
{
	return false;
}

int NoeudSimple::obtenirNombreDenfant() const
{
	return 0;
}

int NoeudSimple::calculerProfondeur() const
{
	return 1;
}

void NoeudSimple::vider()
{

}