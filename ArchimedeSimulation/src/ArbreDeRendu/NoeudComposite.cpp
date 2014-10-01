#include "NoeudComposite.h"


NoeudComposite::NoeudComposite()
{
}


NoeudComposite::~NoeudComposite()
{
}

bool NoeudComposite::ajouterEnfant(NoeudSimple* enfant)
{
	return true;
}

bool NoeudComposite::retirerEnfant(NoeudSimple* enfant)
{
	return true;
}

int NoeudComposite::obtenirNombreDenfant() const
{
	return 1;	
}

int NoeudComposite::calculerProfondeur() const
{
	return 1;
}

void NoeudComposite::vider()
{

}