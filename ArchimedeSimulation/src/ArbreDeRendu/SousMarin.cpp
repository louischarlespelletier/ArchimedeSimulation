#include "SousMarin.h"


SousMarin::SousMarin()
{
}


SousMarin::~SousMarin()
{
}

void SousMarin::afficher()
{
}

void SousMarin::accepterVisiteur(VisiteurAbstrait& v)
{
	v.traiterSousMarin(*this);
}