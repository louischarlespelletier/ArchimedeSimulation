#include "Environnement.h"


Environnement::Environnement()
{
}


Environnement::~Environnement()
{
}

void Environnement::afficher()
{
}

void Environnement::accepterVisiteur(VisiteurAbstrait& v)
{
	v.traiterEnvironnement(*this);
}
